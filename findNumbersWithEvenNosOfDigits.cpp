class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        // beats 100%
        int no = nums.size();
        int n, c = 0;
        int count = 0;
        for (int i = 0; i < no; i++)
        {
            n = nums[i];
            c = 0;
            while (n > 0)
            {
                n = n / 10;
                c++;
            }
            if (c % 2 == 0)
            {
                count++;
            }
        }

        return count;

        // correct, passes all test cases, beats 15%
        //      int no=nums.size();
        //      int d,n,c=0;
        //      vector<int> v;
        //    for(int i=0;i<no;i++){
        //        n= nums[i];
        //        c=0;
        //        while(n >0){
        //            d= n%10;
        //            n= n/10;
        //            c++;
        //        }
        //        v.push_back(c);
        //    }
        //    int count=0;
        //    for(auto i: v){
        //        if(i%2 == 0){
        //            count++;
        //        }
        //    }
        //    return count;
    }
};