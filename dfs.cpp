#include <iostream>
#include <list>
#include<queue>
using namespace std;

class Graph
{
    int V;        // vertices
    list<int> *l; // pointer to an array of lists
public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V]; // array of lists
    }

    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }

    void printAdjList()
    {
        // iterating through each row
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            // iterating through the nodes each node i is connected to
            for (auto node : l[i])
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }

    void dfsHelper(int node, bool *visited){
        visited[node]= true;
        cout<<node<<" ";

        for(auto nbr: l[node]){
            if(!visited[nbr]){
                dfsHelper(nbr, visited);
            }
        }
    }

    void dfs(int source)
    {
       bool *visited= new bool[V]{0};
       //we create this dfsHelper function as the visited array cannot be created again and again
       dfsHelper(source, visited);
    }
};
int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(3, 4);
    g.addEdge(0, 4);
    g.printAdjList();

    cout<<endl;
    g.dfs(1);

    return 0;
}