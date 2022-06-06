class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        priority_queue<int> maxi;
        for (int i = 0; i < matrix[0].size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                maxi.push(matrix[i][j]);
                if (maxi.size() > k)
                    maxi.pop();
            }
        }
        return maxi.top();
    }
};