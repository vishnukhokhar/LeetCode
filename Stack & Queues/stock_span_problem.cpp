#include <bits/stdc++.h>
using namespace std;
class StockSpanner
{
public:
    stack<pair<int, int>> s;
    StockSpanner()
    {
    }

    int next(int price)
    {
        int days = 1;
        if (s.empty())
        {
            s.push({price, days});
            return days;
        }
        else

        {
            while (!s.empty() and s.top().first <= price)
            {
                days += s.top().second;
                s.pop();
            }
            s.push({price, days});
        }
        return days;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */