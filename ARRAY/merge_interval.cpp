#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> mergedIntervals;
    if (intervals.size() == 0)
    {
        return mergedIntervals;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (auto it : intervals)
    {
        if (it[0] <= tempInterval[1])
        {
            tempInterval[1] = max(tempInterval[1], it[1]);
        }
        else
        {
            mergedIntervals.push_back(tempInterval);
            tempInterval = it;
        }
    }
    mergedIntervals.push_back(tempInterval);
    return mergedIntervals;
}
int main()
{
    vector<vector<int>> arr;
    arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector<vector<int>> ans = merge(arr);

    cout << "Merged Overlapping Intervals are " << endl;

    for (auto it : ans)
    {
        cout << it[0] << " " << it[1] << "\n";
    }
}