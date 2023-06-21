class Solution {
public:
    // int recursion(int n){
    //brute force->gives TLE
    //     if(n==1 || n==2){
    //         return n;
    //     }
    //     return recursion(n-1)+recursion(n-2);
    // }
    //recursion+memo-> top-down
    int memoization(int n, vector<int> &dp){
        //better
        if(n<=2) return n;
        if(dp[n] != -1) return dp[n];
        dp[n]= memoization(n-1,dp)+memoization(n-2,dp);
        return dp[n];
    }

    //better
    int bottomsUp(int n){
        vector<int>dp(n+1,-1);
        dp[0]=0;
        if(n==0)return dp[0];
        dp[1]=1;
        if(n==1)return dp[1];
        dp[2]=2;
        if(n==2)return dp[2];

        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

    //optimal
    int bottomsUpSpace(int n){
        int p0=0;
        int p1=1,p2=2,curr;
        if(n==0)return p0;
        if(n==1)return p1;
        if(n==2)return p2;
        for(int i=3;i<=n;i++){
            curr=p2+p1;
            p1=p2;
            p2=curr;
        }
        return curr;
    }

    int climbStairs(int n) {
        // return recursion(n);

        // vector<int>dp(n+1,-1);
        // return memoization(n,dp);
        // return bottomsUp(n);
        return bottomsUpSpace(n);
    }
};