#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();
        queue<int> q;
        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (vis[i])
            {
                continue;
            }

            vis[i] = 1;
            q.push(i);

            while (!q.empty())
            {
                int s = q.front();
                q.pop();

                for (int temp : graph[s])
                {
                    if (vis[temp] == vis[s])
                    {
                        return false;
                    }

                    if (!vis[temp])
                    {
                        vis[temp] = -vis[s];
                        q.push(temp);
                    }
                }
            }
        }
        return true;
    }
};