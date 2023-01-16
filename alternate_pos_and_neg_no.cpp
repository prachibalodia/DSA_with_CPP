class Solution
{
public:
    void rearrange(int arr[], int n)
    {
        // code here
        vector<int> pos, neg, res;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                pos.push_back(arr[i]);
            }
            else
            {
                neg.push_back(arr[i]);
            }
        }

        int i = 0, j = 0;
        while (i < pos.size() && j < neg.size())
        {
            res.push_back(pos[i++]);
            res.push_back(neg[j++]);
        }

        while (i < pos.size())
        {
            res.push_back(pos[i++]);
        }
        while (j < neg.size())
        {
            res.push_back(neg[j++]);
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = res[i];
        }
        return;
    }
};