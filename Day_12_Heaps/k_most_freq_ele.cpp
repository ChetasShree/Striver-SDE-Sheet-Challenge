#include <bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    unordered_map<int, int> mp;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mini;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        mini.push({i.second, i.first});
        if (mini.size() > k)
            mini.pop();
    }
    while (!mini.empty())
    {
        ans.push_back(mini.top().second);
        mini.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}