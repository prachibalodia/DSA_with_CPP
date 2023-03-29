#include <iostream>
#include<climits>
#include<vector>
using namespace std;

//bottom-up approach(iterative)
//the dp array starts from 0, and goes up till m
int minNumberOfCoinsForChange(int m, vector<int> denoms){
    vector<int> dp{m+1,0};
    dp[0]=0;
    for(int i=1;i<=m;i++){
        dp[i]= INT_MAX;

        for(int c: denoms){
            if(i-c >=0 and dp[i-c] != INT_MAX){
                dp[i]= min(dp[i], dp[i-c] + 1);
            }
        }
    }
    return dp[m]==INT_MAX? -1:dp[m];
}
int main()
{
    int m;
    cin>>m;
    vector<int> denoms= {1,5,7,10}; //types of coins
    cout<<minNumberOfCoinsForChange(m,denoms)<<endl;;
 
return 0;
}