// method 1 -tle - O(N^2)
#include <bits/stdc++.h>
int m(vector<int> a)
{
    int n = a.size();
    if (n % 2 == 0)
        return ceil((a[(n / 2) - 1] + a[n / 2]) / 2);
    return a[n / 2];
}
void findMedian(int *arr, int n)
{
    // Write your code here
    vector<int> ans, r;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i]);
        sort(ans.begin(), ans.end());
        r.push_back(m(ans));
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = r[i];
        cout << arr[i] << " ";
    }
}