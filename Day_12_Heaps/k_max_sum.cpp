#include <bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k)
{
    // Write your code here.
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans.push_back(a[i] + b[j]);
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    vector<int> r(ans.begin(), ans.begin() + k);
    return r;
}

// method 2 tle
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k)
{
    // Write your code here.
    priority_queue<int, vector<int>, greater<int>> mini;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            mini.push(a[i] + b[j]);
            if (mini.size() > k)
                mini.pop();
        }
    }
    vector<int> ans;
    while (!mini.empty())
    {
        ans.push_back(mini.top());
        mini.pop();
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    return ans;
}