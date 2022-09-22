class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int asum=0;
        int esum= (n*(n+1))/2;
        for(int i=0;i<n-1;i++){
           asum+= array[i];
           //asum= accumulate(array.begin(), array.end(),0);
        }
        return esum-asum;
    }
};