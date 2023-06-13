class Solution {
public:
    string mappingFun(vector<int>v){
        string s="";
        for(int i=0;i<v.size();i++){
            s+= to_string(v[i])+"#";
        }
        return s;
    }
    int equalPairs(vector<vector<int>>& grid) {
        //simple by swapping and checking if equal
        // vector<vector<int>>v= grid;
        // int c=0;
        // int n= grid.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         swap(v[i][j],v[j][i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(v[i]==grid[j]){
        //             c++;
        //         }
        //     }
        // }
        // return c;.

        //using map
        map<string,int>m;
        int n=grid.size();
        int c=0;
        for(int i=0;i<n;i++){
            m[mappingFun(grid[i])]++;
        }

        
        for(int i=0;i<n;i++){
            string ans="";
            for(int j=0;j<n;j++){
                ans+= to_string(grid[j][i])+"#";
            }
            c+=m[ans];
        }
        return c;
    }
};