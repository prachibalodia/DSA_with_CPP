class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m, j=0;j<n;j++){
            nums1[i++]= nums2[j];
        }
        sort(nums1.begin(), nums1.end());
        //runtime error
        // vector<int> r;
        // for(int i=0;i<m;i++){
        //     if(nums1[i]!=0)
        //     r.push_back(nums1[i]);
        // }
        // for(int i=0;i<n;i++){
        //     r.push_back(nums2[i]);
        // }
        // sort(r.begin(), r.end());
        // for(int i=0;i<nums1.size();i++){
        //     nums1[i]= r[i];
        // }
    }
};