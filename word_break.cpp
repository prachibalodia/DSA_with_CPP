class Solution {
public:
    bool help(int ind, string s, unordered_map<string,int>&m, vector<int>&dp){
        if(ind== s.size()){
            return true;
        }
        if(dp[ind] != -1) return dp[ind];
        bool ans= false;
        string a="";
        for(int i=ind;i<s.size();i++){
            a+= s[i];
            if(m[a]){
                ans|= help(i+1, s,m,dp);
            }
        }
        return dp[ind]= ans;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
       unordered_map<string,int>m;
       for(auto i:wordDict){
           m[i]++;
       } 
       vector<int>dp(s.size(),-1);
       return help(0,s,m,dp);
    }
};