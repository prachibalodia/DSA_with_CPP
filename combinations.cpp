class Solution {
public:
    void solve(int n, int k, int ind, vector<int>&sub, vector<vector<int>>&v){
        if(k==0){
            v.push_back(sub);
            return;
        }

        for(int i=ind;i<=n;i++){
            sub.push_back(i);
            solve(n,k-1,i+1,sub,v);
            sub.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        //T=O(n^k), since n is the number of branches and k is the depth of the tree , S=O(k*x), where x is the number of elements in output
        vector<vector<int>>v;
        vector<int>sub;
        solve(n,k,1,sub,v);
        return v;
    }
};