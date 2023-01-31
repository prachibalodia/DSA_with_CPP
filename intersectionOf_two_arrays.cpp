class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>res;
        vector<int>sol;
        for(int i:nums1){
            for(int j:nums2){
                if(i==j)
                res.insert(i);
            }
        }
        for(int i:res){
            sol.push_back(i);
        }
        return sol;
        


//         vector<int> v;
//         map<int,int> m;
//         int n1= nums1.size();
//         for(int i=0;i<n1;i++){
//             m[nums1[i]]++;
//         }
//         int j=0;
//         for(int i=0;i<m.size();i++){
//             if(m.find(nums2[j]) != m.end()){
//                 v.push_back(nums2[j]);
//             }
//             j++;
//         }
 
// sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());
 
//     for (auto it = v.cbegin(); it != v.cend(); ++it) {
//         cout << *it << ' ';
//     }
//         return v;
    }
};