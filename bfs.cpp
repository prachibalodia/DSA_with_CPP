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
                cout << node << ",";
            }
            cout << endl;
        }
    }

    void bfs(int source)
    {
        queue<int> q;
        bool *visited = new bool[V]{0}; // an array visited

        q.push(source);
        visited[source] = true;

        while (!q.empty())
        {
            int f = q.front();
            cout << f << " ";
            q.pop();

            for (auto nbr : l[f])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
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
    g.bfs(1);

    return 0;
}