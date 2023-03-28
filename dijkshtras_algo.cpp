#include <iostream>
#include<list>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;//vertices
    list<pair<int,int>>*l;  //pointer to an array of lists
    public:
    Graph(int v){
        V=v;
        l=new list<pair<int,int>>[V];  //array of lists
    }
    
    void addEdge(int i, int j, int wt ,bool undir=true){
        l[i].push_back({wt,j});
        if(undir){
            l[j].push_back({wt,i});
        }
    }

    int dijkshtra(int source, int dest){
        set<pair<int, int>>s;
        vector<int> dist{V,INT_MAX};

        //initialization
        dist[source]=0;
        s.insert({0,source});

        while(!s.empty()){
            auto it= s.begin();
            int node= it->second;
            int distTillNow= it->first;
            s.erase(it);

            for(auto nbrPair: l[node]){

                int nbr= nbrPair.second;
                int currentEdge= nbrPair.first;

                if(currentEdge+distTillNow < dist[nbr]){

                    //search if the entry already exists
                    auto f= s.find({dist[nbr], nbr});
                    if(f != s.end()){
                        s.erase(f);
                    }

                    dist[nbr]= currentEdge+distTillNow;
                    s.insert({dist[nbr], nbr});
                }
                
            }
        }
        //Single source shortest distance for all nodes
        for(int i=0;i<V;i++){
            cout<<"Node i "<<i<<" distance "<<dist[i]<<endl;
        }
        return dist[dest];
    }

    void printAdjList(){
        //iterating through each row
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            //iterating through the nodes each node i is connected to
            for(auto node: l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }

};
int main()
{
 Graph g(5);
 g.addEdge(0,1,1);
 g.addEdge(1,2,2);
 g.addEdge(0,2,4);
 g.addEdge(0,3,7);
 g.addEdge(3,2,2);
 g.addEdge(3,4,3);

 g.printAdjList();
 g.dijkshtra(0,3);


return 0;
}