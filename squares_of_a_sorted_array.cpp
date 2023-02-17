class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int s=0;
        for(int i=0;i< nums.size();i++){
            s= nums[i] * nums[i];
            v.push_back(s);        
        }
        sort(v.begin(), v.end());
        return v;
        
    }
};