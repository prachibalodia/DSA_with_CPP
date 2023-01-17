class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int sum=0, i=0, j=0, len= INT_MAX;
        while(i<n){
            sum+= arr[i];
            if(sum >x)
            {
                while(sum>x){
                    len= min(len, i-j+1);
                    sum-= arr[j];
                    j++;
                }
            }
            i++;
        }
        return len;
    }
};