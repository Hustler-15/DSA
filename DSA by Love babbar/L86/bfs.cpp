#include <unordered_map>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

void bfs(vector<vector<int>> &adj, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        // store frontNode into ans
        ans.push_back(frontNode);
        for (auto i : adj[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
{
    vector<int> ans;
    unordered_map<int, bool> visited;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(adj, visited, ans, i);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }

    return ans;
}
// https://www.codingninjas.com/studio/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar