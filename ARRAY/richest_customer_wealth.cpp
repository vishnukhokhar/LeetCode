#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int n = accounts.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int ab = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                ab += accounts[i][j];
            }
            ans = max(ans, ab);
        }
        return ans;
    }
};