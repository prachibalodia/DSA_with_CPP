class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int largest= INT_MIN;
        int n= nums.size();
       
        for(int i=0;i< n; i++){  //for(auto x: nums) cr+= x;
            cs+= nums[i];
            
            largest= max(largest, cs);
            
            if(cs<0){
                cs=0;
            }
        }
        return largest;
    
    }
};