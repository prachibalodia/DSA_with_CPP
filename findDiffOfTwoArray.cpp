class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1;
        vector<int>v2;
        set<int>s1;
        set<int>s2;

        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }

        for(auto n: s1){
            if(s2.count(n) == 0){
                v1.push_back(n);
            }
        }
        for(auto n: s2){
            if(s1.count(n) == 0){
                v2.push_back(n);
            }
        }
        return {v1,v2};
    }
};