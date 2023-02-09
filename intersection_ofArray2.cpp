class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int> v;
       map<int, int> m1;
       map<int, int> m2;
       for(int i: nums1){
        m1[i]++;
       }
       for(int i: nums2){
        m2[i]++;
       }

       for(auto i: m1){
        auto it= m2.find(i.first);
        if(it != m2.end()){
            int temp= min(i.second, it -> second);
            while(t!=0){
                v.push_back(i.first);
                t--;
            }
        }
       }
       return v;
    }
};

// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> v;
//        map<int,int> m1;
//        map<int, int> m2;
//        for(int i : nums1){
//            m1[i]++;
//        }
//        for(int i : nums2){
//            m2[i]++;
//        }

//        for(auto i: m1){
//            auto it= m2.find(i.first);
//            if(m2.find(i.first) != m2.end()){
//                int t= min(i.second, it -> second);
//                while(t!=0){
//                    v.push_back(i.first);
//                    t--;
//                }

//            }
//        }
//         return v;
//     }
// };