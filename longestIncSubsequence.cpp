#include <iostream>
#include<vector>
#include<climits>
using namespace std;

//bottom up solution
int lcs(vector<int> arr){
    int n= arr.size();
    vector<int> dp{n, 1};

    int lis=1; //longest incresing subsequence

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j]){
                dp[i]= max(dp[i], dp[j]+1);
                lis= max(lis, dp[i]);
            }
        }
    }
    return lis;     
}

int main()
{
    vector<int> arr{50,4,10,8,30,100};
    cout<<lcs(arr)<<endl;
 
return 0;
}