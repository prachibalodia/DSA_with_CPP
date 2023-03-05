class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0, dsum=0,d=0,n;
        for(int i=0;i<nums.size();i++){
            esum+= nums[i];
            n= nums[i];
            while(n>0){
                d= n % 10;
                dsum+= d;
                n= n/10;
            }
        }
        return abs(esum-dsum);
    }
};