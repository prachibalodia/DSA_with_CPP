class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> v;
        int sum=0, s=0;
        for(int i=0;i<nums.size();i++){
            sum+= nums[i];
        }
        sort(nums.begin(), nums.end());
        for(int i= nums.size()-1;i>=0;i--){
            v.push_back(nums[i]);
            s+=nums[i];
            if(s> (sum-s)){
                break;
            }
        }
        return v;
    }
};