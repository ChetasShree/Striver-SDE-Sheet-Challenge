class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        priority_queue<pair<int, pair<int, int>>> maxi;
        for (int i = 0; i < points.size(); i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            int d = x * x + y * y;
            maxi.push({d, {x, y}});
            if (maxi.size() > k)
                maxi.pop();
        }
        vector<vector<int>> ans;
        while (!maxi.empty())
        {
            // vector<int>y;
            // y.push_back()
            ans.push_back({maxi.top().second.first, maxi.top().second.second});
            maxi.pop();
        }
        return ans;
    }