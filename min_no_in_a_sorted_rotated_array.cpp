class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        sort(arr, arr+(high+1));
        return arr[0];
        
        //or
        // int m= 9999;;
        // // Your code here
        // for(int i=0;i<=high;i++){
        //     m= min(m, arr[i]);
        // }
        // return m;
    }
};