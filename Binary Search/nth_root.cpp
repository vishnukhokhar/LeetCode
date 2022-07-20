#include <bits/stdc++.h>
using namespace std;
double multiply(double number, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }
    return ans;
}

double findNthRootOfM(int n, int m)
{
    // Write your code here.

    double low = 1.0;
    double high = m;
    double eps = 1e-6;
    while ((high - low) > eps)
    {
        double mid = (high + low) / 2.0;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << low << endl;
}

int main()
{
    int n = 3, m = 27;
    findNthRootOfM(n, m);
    return 0;
}