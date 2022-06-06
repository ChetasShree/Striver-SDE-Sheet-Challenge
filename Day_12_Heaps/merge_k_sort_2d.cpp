#include <bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    // Write your code here.
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> mini;
    for (int i = 0; i < kArrays.size(); i++)
    {
        for (int j = 0; j < kArrays[i].size(); j++)
        {
            mini.push(kArrays[i][j]);
        }
    }
    while (!mini.empty())
    {
        ans.push_back(mini.top());
        mini.pop();
    }
    return ans;
}
