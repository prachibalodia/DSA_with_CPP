class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0, subarrays=0;
        for(auto n: nums){
            if(n == 0){
                count++;
                subarrays+= count;
            }
            else{
                count=0;
            }
        }
    return subarrays;
        
    }
};