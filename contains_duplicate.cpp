class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int, int> m;
        for(auto i: nums){
            m[i]++;
        }
        for(auto j: nums){
            if(m[j]> 1){
                return true;
            }
        }
        return false;
    }
};