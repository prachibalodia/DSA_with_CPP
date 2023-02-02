class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]== val){
                c++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return n-c;
    }
};