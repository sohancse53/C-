#include<bits/stdc++.h>
using namespace std;
int main()
{
int node, edges;
cout<<"enter the number of nodes: ";
cin>>node;
vector<pair <int, int>> graph[node];
cout<<"enter number of edges: ";
cin>>edges;
cout<<"enter(u,v,edges)"<<endl;
int u,v,weight;
for(int i=0;i<edges;i++)
{
    cin>>u >>v>> weight;
    graph[u].push_back({v,weight});
    graph[v].push_back({u,weight});
}


// print the adjacency list
cout<<"------------the adjacency list is------------"<<endl;

for(int i=0;i<node;i++)
{
   
    for(auto edge:graph[i]){
        printf( "(%d -> %d Weight: %d ) -----",i,edge.first,edge.second);
    }
    cout<<endl;
}
return 0;
}