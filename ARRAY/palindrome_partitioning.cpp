#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {

        string st = to_string(x);
        string st2 = to_string(x);
        reverse(st2.begin(), st2.end());
        if (st.compare(st2) == 0)
            return true;
        else
            return false;
    }
};