class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        int n=mat.size();
        int c;
        set<pair<int, int>> s;

        for(int i=0;i<n;i++){
            c= count(mat[i].begin(), mat[i].end(),1);
            s.insert({c,i});
            
        }
        vector<int> v;
        for(auto i: s){
            if(k==0){
                break;
            }
            v.push_back(i.second);
            k--;
        }
        return v;

        //intuitive approach
        // int x= mat.size();
        // int y= mat[0].size();
        // map<int,int> m;
        // for(int i=0;i<x;i++){
        //     for(int j=0;j<y;j++){
        //         if(mat[i][j] == 1){
        //             m[i]++;
        //         }
        //     }
        // }

        // vector<int> v;
        // for(auto i:m){
        //     if(i.second)
        // }
        
    }
};