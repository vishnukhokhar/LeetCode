// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void fun(int ind, int sum, vector<int> &arr, int N, vector<int> &sumsubsets)
    {
        if (ind == N)
        {
            sumsubsets.push_back(sum);
            return;
        }
        // picking up the element
        fun(ind + 1, sum + arr[ind], arr, N, sumsubsets);

        // not picking the element

        fun(ind + 1, sum, arr, N, sumsubsets);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> sumsubsets;
        fun(0, 0, arr, N, sumsubsets);
        sort(sumsubsets.begin(), sumsubsets.end());
        return sumsubsets;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans)
        {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends