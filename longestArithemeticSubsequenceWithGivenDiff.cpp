class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
       //T= O(N), S= O(N)
       unordered_map<int,int>m;
       int mx=0;
       for(auto i: arr){
           m[i]= 1+m[i-d];
           mx= max(mx,m[i]);
       }
       return mx;
    }
};