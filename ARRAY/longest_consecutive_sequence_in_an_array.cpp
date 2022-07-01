#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> hashmap;
        for (int num : nums)
        {
            hashmap.insert(num);
        }

        long long int longest_streak = 0;

        for (int num : nums)
        {
            if (!hashmap.count(num - 1))
            {
                long long int current_num = num;
                long long int current_streak = 1;

                while (hashmap.count(current_num + 1))
                {
                    current_num += 1;
                    current_streak += 1;
                }

                longest_streak = max(longest_streak, current_streak);
            }
        }
        return longest_streak;
    }
};