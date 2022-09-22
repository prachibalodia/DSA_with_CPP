class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        if(s==0){
            return {-1};
        }
        long long sum=0;
        int i=0, j=0;
        for(i=0;i<n;i++){
            if(sum<s){
                sum+=arr[i];
            }
            while(sum>s){
                sum-= arr[j];
                j++;
            }
            if(sum==s){
                return{j+1,i+1};
            }
            
            
        }
        return {-1};
    }
};