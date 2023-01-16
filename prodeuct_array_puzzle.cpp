class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
    {

        // code here
        vector<long long int> v;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                zero++;
            }
        }

        // for multiple zeros
        if (zero > 1)
        {
            for (int i = 0; i < n; i++)
            {
                v.push_back(0);
            }
            return v;
        }
        else if (zero == 1)
        {
            for (int i = 0; i < n; i++)
            {
                long long int p = 1;
                if (nums[i] != 0)
                {
                    p *= nums[i];
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    v.push_back(p);
                }

                else
                {
                    v.push_back(p);
                }
            }
            return v;
        }
        else
        {
            long long int p = 1;
            for (int i = 0; i < n; i++)
            {
                p *= nums[i];
            }

            for (int i = 0; i < n; i++)
            {
                int p1;
                p1 = p / mums[i];
                v.push_back(p1);
            }
            return v;
        }

        // partially correct, not correct for the 0 approach
        //  vector<long long int> v;
        //  long long int p= 1;

        // for(int i=0;i<n;i++){
        //     p*= nums[i];
        // }
        // long long int p1= 0;
        // for(int i=0;i<n;i++){
        //     p1= p/nums[i];
        //     v.push_back(p1);
        // }
        // return v;
    }
};