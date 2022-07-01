#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (mpp.find(target - nums[i]) != mpp.end())
            {
                ans.push_back(mpp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                mpp[nums[i]] = i;
            }
        }
        return ans;
    }
};
