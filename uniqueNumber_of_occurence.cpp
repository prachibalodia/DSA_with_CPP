class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        map<int, int> m;
        set<int> s;
        for(auto i: arr){
            m[i]++;
        }

        for(auto i: m){
            s.insert(i.second);
        }

        return m.size() == s.size();
        
        // map<int,int> m;
        // for(auto i: arr){
        //     m[i]++;
        // }
        // int k=0;
        // for(int i=0;i<arr.size()-1;i++){
        // if(m[arr[i]].second == m[arr[i+1]].second){  //throws an error
        //     k=1;
        //     break;
        // }
        // }
        // if(k==1){
        //     return false;
        // }
        // return true;
        
    }
};