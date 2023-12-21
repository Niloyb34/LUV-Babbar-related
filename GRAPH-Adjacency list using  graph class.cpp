//GRaph-Adjancency list using graph class
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph
{
public:
       vector<vector<int>>adlist;
       //constructor
       graph(int vertices)
       {
              adlist.resize(vertices);
       }
       //Functions to add edge
       void addEdge(T u,T v)
       {
           adlist[u].push_back(v);
           adlist[v].push_back(u);
       }
       //Functions to print the adjacency list
       void printGraph()
       {
              for(int i=0;i<adlist.size();i++)
              {
                     cout<<"Adjacency list of vertex "<< i <<"  is : ";
                     for(const auto& it:adlist[i])
                     {
                            cout<<it<<" ";
                     }
                     cout<<endl;
              }
       }
};
int main()
{
       //creating a graph
       int vertices,edges,u,v;
       cout<<"Enter the number of vertices : ";
       cin>>vertices;
       cout<<"Enter the number of edges : ";
       cin>>edges;
       graph<int>g(vertices);
       for(int i=0;i<edges;i++)
       {
              cin>>u>>v;
              g.addEdge(u,v);
       }
       g.printGraph();
}


