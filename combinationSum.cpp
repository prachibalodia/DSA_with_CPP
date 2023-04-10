class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& c, int target, int i, vector<int> v){
        if(target == 0){
            ans.push_back(v);
            return;
        }

        //recursion
        while(i< c.size() && target- c[i]>=0){
            v.push_back(c[i]);

            helper(c, target-c[i], i, v); // since c[i] can be reused any no of times
            i++;

            //backtracking
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int     target) {
        vector<int> v;
        //sorting
        sort(candidates.begin(), candidates.end());

        //remove duplicates
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());
        helper(candidates, target, 0, v);
        return ans;
    }
};