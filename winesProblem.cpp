#include <iostream>
#include<vector>
#include<climits>
using namespace std;

//Top-Down Approach/ Recursive
int winesI(int dp[][10], int prices[], int L, int R, int y){
    //base case
    if(L>R){
        return 0;
    }
    //need if a state is already there
    if(dp[L][R] != 0){
        return dp[L][R];
    }

    //rec case
    int pick_left= y*prices[L] + winesI(dp, prices, L+1, R, y+1);
    int pick_right= y*prices[R] + winesI(dp, prices, L, R-1, y+1);

    return dp[L][R] = max(pick_right, pick_left);

}

//Bottom Up Approach- Iterative
int winesII(int price[], int n){
    vector<vector<int>> dp(n+1, vector<int>(n+1,0));
    for(int i=n-1;i>=0;i--){
        //bottom row to top row
        for(int j=0;j<n;j++){

            if(i==j){
                dp[i][i]= n*price[i];
            }
            else if(i < j){
                //dp(i...j)
                int y= n- (j-i);
                int pick_left= price[i]*y + dp[i+1][j];
                int pick_right= price[j]*y + dp[i][j-1];
                dp[i][j] = max(pick_left, pick_right);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[0][n-1];
}

int main()
{
    int a[]= {2,3,5,1,4};
    int n= 5;
    int dp[10][10] = {0};

    cout<<winesI(dp,a,0,n-1,1)<<endl;

    //printing the dp table
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------"<<endl;
    cout<<winesII(a,n);
 
return 0;
}