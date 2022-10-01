class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        map<int,int> m;
        int sum=0;
        for(int i=0;i<n;i++){
            sum= sum+arr[i];
            if(sum== 0 || m.find(sum)!= m.end()){
                return true;
            }
            m[sum]++;
        }
        return false;
    }
};