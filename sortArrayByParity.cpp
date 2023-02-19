class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        vector<int> ans;
        for(int i=0;i< nums.size();i++){
            if(nums[i] % 2 == 0){
                ans.push_back(nums[i]);
            }
        }

        for(int i=0;i< nums.size();i++){
            if(nums[i] % 2 != 0){
                ans.push_back(nums[i]);
            }
        }

        return ans;

        //half of the test cases dont pass
        // for(int i=0,j=0;i<nums.size()-1;i++){
        //     if(nums[i] % 2 !=0){
        //         swap(nums[i], nums[j++]);
        //     }
        // }
        // reverse(nums.begin(), nums.end());
    
        // return nums;
        
    }
};