class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        // approach 2- using two pointers, one at start and other at start

        int boatC = 0;
        sort(people.begin(), people.end());
        int start = 0, end = people.size() - 1;
        int sum;
        while (start <= end)
        {
            sum = people[start] + people[end];
            if (sum <= limit)
            {
                boatC++;
                start++;
                end--;
            }
            else
            {
                end--;
                boatC++;
            }
        }

        return boatC;
        // brute force approach- 3rd case failed
        //  float sum=0;
        //  for(auto i:people){
        //      sum+= i;
        //  }
        //  float d= sum/limit;
        //  int r= ceil(d);
        //  return r;
    }
};