class Solution
{
public:
    int calc(int amount, vector<int> &coins, int i, vector<vector<int>> &dp)
    {
        if (i < 0 || amount < 0)
        {
            return 0;
        }
        if (amount == 0)
        {
            return 1;
        }
        if (dp[i][amount] != -1)
        {
            return dp[i][amount];
        }

        return dp[i][amount] = calc(amount - coins[i], coins, i, dp) + calc(amount, coins, i - 1, dp);
    }
    int change(int amount, vector<int> &coins)
    {
        vector<vector<int>> dp(301, vector<int>(5001, -1));
        return calc(amount, coins, coins.size() - 1, dp);
    }
};