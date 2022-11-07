class Solution
{
public:
    int IsValid(string &s, int l, int r)
    {
        while (l >= 0 and r < s.size() and s[l] == s[r])
        {
            l--;
            r++;
        }
        return r - l - 1;
    }
    string longestPalindrome(string s)
    {
        int n = s.size();
        int max_len = 0;
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            int len1 = IsValid(s, i, i);
            int len2 = IsValid(s, i, i + 1);
            int len = max(len1, len2);

            if (len > max_len)
            {
                max_len = len;
                start = i - ((max_len - 1) / 2);
            }
        }
        string ans = s.substr(start, max_len);
        return ans;
    }
};