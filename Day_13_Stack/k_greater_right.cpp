class Solution
{
public:
    // Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        // Your code here
        stack<long long> s;
        vector<long long> v;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.empty())
                v.push_back(-1);
            else if (!s.empty() && s.top() > arr[i])
                v.push_back(s.top());
            else if (!s.empty() && s.top() < arr[i])
            {
                while (!s.empty() && s.top() <= arr[i])
                    s.pop();
                if (s.empty())
                    v.push_back(-1);
                else
                    v.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
