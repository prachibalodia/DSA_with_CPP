#include <iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==0 || n==1){
        return n;
    }

    return fib(n-1)+fib(n-2);
}

//Recusrsion + Memoization (Top-Down Approach) (Recursive)
int fibMem(int n, int dp[]){
    //base case
    if(n==0 ||n==1){
        return n;
    }
    
    if(dp[n] != 0){
        return dp[n];
    }

    return dp[n]= fibMem(n-1, dp) + fibMem(n-2, dp);
}

//Bottom-Up Approach (Iterative)
int fibBottomUp(int n, int dp[]){
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<n;i++){
        dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main()
{
 int n;
 cin>>n;
 int dp[n+1]= {0};
 cout<<"Fib "<<fib(n)<<endl;
 cout<<"FibMem "<<fibMem(n,dp)<<endl;
 cout<<"FibBottomUp "<<fibBottomUp(n,dp)<<endl;

return 0;
}