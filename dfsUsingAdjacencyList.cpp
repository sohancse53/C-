#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int e;
    cin >> e;  
     vector<int> adjList[n];

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);  
    }

    int visited[n] = {0}; 

    int root = 3;
    stack<int> s;
    s.push(root);

    // DFS
    while (!s.empty()) {
        int node = s.top();
        s.pop();

      
        if (visited[node]) {
            continue;
        }

        
        visited[node] = 1;
        cout << node << " ";
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                s.push(neighbor);
            }
        }
    }

    return 0;
}
