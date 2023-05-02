class Solution {
public:
    int arraySign(vector<int>& nums) {
        //only 4 passes
        // long long p=1;
        // for(int i=0;i<nums.size();i++){
        //     p*= nums[i];
        // }
        // int x;
        // if(p>0){
        //     x=1;
        // }
        // else if(p<0){
        //     x=-1;
        // }
        // else{
        //     x=0;
        // }
        // return x;

        //
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                return 0;
            }
            if(nums[i]<0){
                c++;
            }
        }
        return (c%2 == 0)? 1:-1;
        
    }
};