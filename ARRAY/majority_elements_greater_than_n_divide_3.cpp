#include <bits/stdc++.h.
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int sz = nums.size();
        int num1 = -1;
        int num2 = -1;
        int c1 = 0;
        int c2 = 0;

        for (int i = 0; i < sz; i++)
        {
            if (nums[i] == num1)
            {
                c1++;
            }
            else if (nums[i] == num2)
            {
                c2++;
            }
            else if (c1 == 0)
            {
                num1 = nums[i];
                c1 = 1;
            }
            else if (c2 == 0)
            {
                num2 = nums[i];
                c2 = 1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        c1 = c2 = 0;

        for (int i = 0; i < sz; i++)
        {
            if (nums[i] == num1)
            {
                c1++;
            }
            else if (nums[i] == num2)
            {
                c2++;
            }
        }
        if (c1 > sz / 3)
        {
            ans.push_back(num1);
        }
        if (c2 > sz / 3)
        {
            ans.push_back(num2);
        }
        return ans;
    }
};