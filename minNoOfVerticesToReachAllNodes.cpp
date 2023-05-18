class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
       vector<int> ans, visited(n,0);
        for(auto e: edges){
            visited[e[1]]=1;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                ans.push_back(i);
            }
        }
        return ans;   
    }
};