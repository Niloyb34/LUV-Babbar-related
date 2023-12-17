#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T> ////Ei template use korle only  graph<char>g; and char u,v; aikane data type change korlei hbe mane datatype easily shift kora jabe mane void addEdge oikane change er drkar nie
class graph
{
public:
       map<T,list<T>>adj;
       void addEdge(T u,T v, bool direction)
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
                            cout<<j<<" , ";
                     }
                     cout<<endl;
              }
       }
};
int main()
{
       int n;
       cout<<"Enter the number of nodes :"<<endl;
       cin>>n;
       int m;
       cout<<"Enter the number of edges :"<<endl;
       cin>>m;
       graph<int>g;///aikane amra
       for(int i=0;i<m;i++)
       {
              int u,v;
             cin>>u>>v;
             //Creating an undirected graph
             g.addEdge(u,v, 0);
       }
       ///printing graph
       g.printAdjList();
}
////input formate.
Enter the number of nodes :5

Enter the number of edges :6

0 1
1 2
2 3
3 1
3 4
0 4
       
