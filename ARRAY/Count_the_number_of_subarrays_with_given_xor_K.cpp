int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    unordered_map<int, int> m;
    int count = 0;
    int xorr = 0;
    for (auto i : A)
    {
        xorr = xorr ^ i;
        if (xorr == B)
            count++;
        if (m.find(xorr ^ B) != m.end())
        {
            count += m[xorr ^ B];
        }
        m[xorr]++;
    }
    return count;
}