//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        
        //sliding window pt1
        long long int sum=0, mx= INT_MIN;
        int j=0,i=0;
        //i is the start of the sliding window and j is the end
        while(j<n){
            sum+= arr[j];
            if(j-i+1 <k){
                j++;
            }
            else if((j-i+1)==k){
                mx= max(mx, sum);
                sum= sum- arr[i];
                i++;
                j++;
            }
        }
        return mx;
        
         //sliding window pt 2
    //   int mx=INT_MIN, sum=0, j=0;
    //   for(int i=0;i<k;i++){
    //       sum+= arr[i];
    //   }
    //   mx= max(mx, sum);
      
    //   for(int i=1;i<n;i++){
          
    //       sum= sum-arr[i-1];
    //       sum= sum+ arr[i+k-1];
    //       mx= max(mx, sum);
    //   }
    //   return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends