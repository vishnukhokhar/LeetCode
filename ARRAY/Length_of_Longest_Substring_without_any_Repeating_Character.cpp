#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        vector<int> mpp(256, -1);
        int l = 0;
        int r = 0;
        int ans = 0;

        while (r < n)
        {
            if (mpp[s[r]] != -1)
            {
                l = max(mpp[s[r]] + 1, l);
            }
            mpp[s[r]] = r;

            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};