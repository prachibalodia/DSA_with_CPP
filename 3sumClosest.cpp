class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum, closest, diff, min_diff= INT_MAX;
        for(int i=0;i<nums.size();i++){
            sort(nums.begin(),nums.end());
            int j= i+1, k= nums.size()-1;
            while(j<k){
                sum= nums[i]+nums[j]+nums[k];
                diff= abs(target- sum);
                if(diff< min_diff){
                    min_diff= diff;
                    closest= sum;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return closest;
    }
};