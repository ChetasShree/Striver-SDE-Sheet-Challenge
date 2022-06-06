#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    // Write your code here.
    vector<int> ans;
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi.push(arr[i]);
        mini.push(arr[i]);
        if (maxi.size() > k)
            maxi.pop();
        if (mini.size() > k)
            mini.pop();
    }
    ans.push_back(maxi.top());
    ans.push_back(mini.top());
    return ans;
}