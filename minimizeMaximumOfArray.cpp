class Solution
{
public:
    int minimizeArrayValue(vector<int> &nums)
    {
        long long sum = 0, ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            ans = max(ans, (sum + i) / (i + 1));
        }
        return ans;
    }
};