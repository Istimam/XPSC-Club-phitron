#include<bits/stdc++.h>
#define ll long long
using namespace std;
void DFS(int node, vector<vector<int>>& graph, vector<bool>& visited, vector<ll>& leafCount) 
{
    visited[node] = true;
    if(graph[node].size() == 1 && node != 1)
    {
        leafCount[node] += 1;
    }
    for(auto i:graph[node])
    {
        if(!visited[i])
        {
            DFS(i, graph, visited, leafCount);
            leafCount[node] += leafCount[i];
        }
    }
}
int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> graph(n + 1);
        vector<bool> visited(n + 1);
        vector<ll> leafCount(n + 1);
        for (int i = 1; i < n; ++i) 
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        DFS(1, graph, visited, leafCount);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << leafCount[x] * leafCount[y] << '\n';
        }
    }
    return 0;
}