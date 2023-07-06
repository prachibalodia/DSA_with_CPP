class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //optimal-> T= O(N), S= O(1)
        //sliding window
        int i=0,j=0,sum=0,mini=INT_MAX;
        int n= nums.size();
        while(j<n){
            sum+= nums[j];
            while(sum>=target){
                mini= min(mini, j-i+1);
                sum-= nums[i];
                i++;
            }
            j++;
        }
        return (mini==INT_MAX)? 0:mini;
    }
};