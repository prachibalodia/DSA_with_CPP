class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x= nums.size()/2;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto i: m){
            if(i.second > x){
                return i.first;
            }
        }
        return -1;
    }
};