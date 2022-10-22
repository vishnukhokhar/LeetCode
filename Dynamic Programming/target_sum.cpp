class Solution
{
public:
    int n;
    int t;
    map<pair<int, int>, int> dp;

    int recur(vector<int> &nums, int sum, int i)
    {
        if (i == n)
        {
            if (sum == t)
            {
                return 1;
            }
            else

            {
                return 0;
            }
        }

        if (dp.find({sum, i}) != dp.end())
        {
            return dp[{sum, i}];
        }
        int plus = recur(nums, sum + nums[i], i + 1);
        int neg = recur(nums, sum - nums[i], i + 1);

        return dp[{sum, i}] = plus + neg;
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        n = nums.size();
        t = target;
        int ans = recur(nums, 0, 0);
        return ans;
    }
};