class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c= 0, ans=0;
        for(auto i: nums){
            if(i==1){
                c++;
            }
            else{
                c=0;
            }
            ans= max(ans, c);
        }
        return ans;
    }
};