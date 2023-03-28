#include <iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;//vertices
    list<int>*l;  //pointer to an array of lists
    public:
    Graph(int v){
        V=v;
        l=new list<int>[V];  //array of lists
    }
    
    void addEdge(int i, int j){
        l[i].push_back(j);
    }

    void printAdjList(){
        //iterating through each row
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            //iterating through the nodes each node i is connected to
            for(auto node: l[i]){
                cout<<node<<" ";
            }
            cout<<endl;
        }
    }

    void topologicalSorting(){

        vector<int> indegree{V,0}; //dependencies of each node or incoming directions
        //assigning indegrees
        for(int i=0;i<V;i++){
            for(auto nbr: l[i]){
                indegree[nbr]++;
            }
        }

        //bfs
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node= q.front();
            cout<<node<<" ";
            q.pop();

            //iterating through neighbours of node
            for(auto nbr: l[node]){
                indegree[nbr]--;
                if(indegree[nbr] ==0){
                    q.push(nbr);
                }
            }
        }

    }

};
int main()
{
 Graph g(6);
 g.addEdge(0,2);
 g.addEdge(2,3);
 g.addEdge(3,5);
 g.addEdge(4,5);
 g.addEdge(1,4);
 g.addEdge(1,2);
 g.printAdjList();
 g.topologicalSorting();


return 0;
}