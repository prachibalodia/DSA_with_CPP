class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n= nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long long new_target= (long long)target- (long long)nums[i] - (long long)nums[j];
                int low= j+1, high= n-1;
                while(low<high){
                    if((nums[low]+ nums[high]) > new_target){
                       high--;
                    }
                    else if((nums[low]+ nums[high]) < new_target){
                        low++;
                    }
                    else{
                        s.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }
        for(auto x: s){
            result.push_back(x);
        }
        return result;
    }
};