class Solution {
private :
    bool bfs(int start,vector<int>& col , vector<vector<int>>& graph){
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto x: graph[node]){
                if(col[x] == -1){
                    col[x]= !col[node];
                    q.push(x);
                }
                else if(col[x] == col[node]){
                    return false;
                }
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {

          int n = graph.size();
          vector<int> color(n,-1);

           for(int i=0;i<n;i++){
               if(!bfs(i,color,graph))
                return false;
           }

        return true;
    }
};