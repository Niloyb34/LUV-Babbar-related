#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T> ////Ei template use korle only  graph<char>g; and char u,v; aikane data type change korlei hbe mane datatype easily shift kora jabe
class graph
{
public:
       unordered_map<int,list<int>>adj;
       void addEdge(int  u,int v, bool direction)
       {
              ///direction =0 ---> undirected
              ///direction =1 ----> Directed graph
              ///Create an edge from u to v
              adj[u].push_back(v);//mane hocce je akta node u er modde v ke dukie dilam drlam je u teke v er dike akta direction ase , othoba direction na thakleo drlam undirected graph e u and v connected
              if(direction==0)//akon jdi graph e directed na hoi nahole as u to v akta conection ase tie v to u o akta connection thakbe aijnno direction=0 mane undirected graph
              {
                     adj[v].push_back(u);//as graph is undirected tie bola jie v to u er dikeo akta connection mane jehuto fixed direction nie
              }
       }
       void printAdjList()
       {
              for(auto i:adj)
              {
                     cout<<i.first<<"-> ";
                     for(auto j:i.second)
                     {
                            cout<<j<<" ,   ";
                     }
                     cout<<endl;
              }
       }
};
int main()
{
       int n;
       cout<<"Enter the number of nodes :";
       cin>>n;
       cout<<endl;
       int m;
       cout<<"Enter the number of edges :";
       cin>>m;
       cout<<endl;
       graph<int> g; // Instantiate graph with char data type

       for(int i=0;i<m;i++)
       {
             int  u,v;
             cin>>u>>v;
             //Creating an undirected graph
             g.addEdge(u,v, 0);
       }
       ///printing graph
       g.printAdjList();
}

