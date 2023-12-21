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
/*
Enter the number of vertices : 5
Enter the number of edges : 7
0 1
0 2
1 2
1 3
2 3
2 4
3 4
Adjacency list of vertex 0  is : 1 2
Adjacency list of vertex 1  is : 0 2 3
Adjacency list of vertex 2  is : 0 1 3 4
Adjacency list of vertex 3  is : 1 2 4
Adjacency list of vertex 4  is : 2 3
*/

