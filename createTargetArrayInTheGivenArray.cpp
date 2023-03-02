class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n= index.size();
        vector<int> v;
        int k=0;
        for(int i=0;i<n;i++){
            v.insert(v.begin()+index[i], nums[i]);
        }
        return v;
        
    }
};