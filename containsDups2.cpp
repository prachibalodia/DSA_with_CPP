class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i])){
                if(abs(i- m[nums[i]] <= k)){
                    return true;
                }
            }
             m[nums[i]] = i;
        }
        return false;
       

        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j] && abs(i-j) <= k){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};