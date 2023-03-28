class Solution {
public:

// //function for recursion
// int solve(int n,vector<int>& days, vector<int>& costs, int index){

//     //base case
//     if(index >= n){
//         return 0;
//     }

//     //for 1 day pass
//     int cost1= costs[0] + solve(n, days, costs, index+1);

//     //for 7 days pass
//     int i;
//     for(i=index; i<n && days[i] < days[index]+7;i++);

//     int cost2= costs[1]+ solve(n, days, costs, i);

//     //for 3- days pass
//     for(i=index;i<n && days[i] < days[index]+7;i++);

//     int cost3= costs[2] + solve(n, days, costs, i);

//     return min(cost1, min(cost2, cost3));
// }

//function for recursion+momoization
int solveMem(int n,vector<int>& days, vector<int>& costs, int index, vector<int>dp){

    //base case
    if(index >= n){
        return 0;
    }
    if(dp[index] != -1)
    return dp[index];

    //for 1 day pass
    int cost1= costs[0] + solveMem(n, days, costs, index+1,dp);

    //for 7 days pass
    int i;
    for(i=index; i<n && days[i] < days[index]+7;i++);

    int cost2= costs[1]+ solveMem(n, days, costs, i,dp);

    //for 3- days pass
    for(i=index;i<n && days[i] < days[index]+7;i++);

    int cost3= costs[2] + solveMem(n, days, costs, i,dp);

    dp[index]= min(cost1, min(cost2, cost3));
    return dp[index];
}

int solveTab(int n,vector<int>& days, vector<int>& costs){
    vector<int> dp(n+1, INT_MAX); //as we need to find min
    dp[n]=0;//as it is a bottom-up approach

    for(int k=n-1;k>=0;k--){
    //for 1 day pass
    int cost1= costs[0] + dp[k+1];

    //for 7 days pass
    int i;
    for(i=k; i<n && days[i] < days[k]+7;i++);

    int cost2= costs[1]+ dp[i];

    //for 3- days pass
    for(i=k;i<n && days[i] < days[k]+7;i++);

    int cost3= costs[2] + dp[i];

    dp[k]= min(cost1, min(cost2, cost3));
    }
   return dp[0];
}


    int mincostTickets(vector<int>& days, vector<int>& costs) {
        //approach-1 recursion
        //but recursion will give a TLE because of exponential time complexity O(2^n)
        //top-down approach
        int n= days.size();
        // return solve(n,days, costs, 0);

        //approach-2 recursion+memoization
        //will give TLE
        //top-down approach
        // vector<int>dp(n+1,-1);
        // return solveMem(n, days, costs, 0, dp);

        //approach 3- Tabulation
        //gives TLE T&S- O(n)
        //bottom-up approach
        // return solveTab(n, days, costs);

        //approach 4- DP

        int dp[366]= {0};
        unordered_set<int> s;
        for(auto day: days){
            s.insert(day);
        }

        for(int i=1;i<=365;i++){
            if(s.find(i) == s.end()){
                dp[i]= dp[i-1];
            }
            else{
                dp[i]= min(dp[i-1]+costs[0], min(dp[max(0, i-7)]+costs[1], dp[max(0, i-30)]+costs[2]));
            }
        }
        return dp[365];
    }
};