#include<bits/stdc++.h>
using namespace std;
int main()
{
 int node,edges; 
 cout<<"enter the node number: ";
 cin>>node;
 int graph[node][node];
 cout<<"enter the number of edges: ";
 cin>>edges;
 for(int i=0;i<node;i++)
 {
    for(int j=0;j<node;j++)
    {
        if(i==j)
        {
            graph[i][j]=0;
        }
        else{
              graph[i][j]=-1;
        }
    }
 }
 int u,v,weight;
 cout<<"edge1 - edge 2- weight"<<endl;
for(int i=0;i<edges;i++)
{
    cin>>u>>v>>weight;
    graph[u][v]=weight;
    graph[v][u]=weight;
}

//print  adjacency matrix
cout<<"----------the adjacency matrix is---------"<<endl;
  for(int i=0;i<node;i++)
 {
    for(int j=0;j<node;j++)
    {
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
 }

return 0;
}