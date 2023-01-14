/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       for(int i=0;i<n;i++){
           
           if(arr[i]> arr[i+1]){
               return i;
               
           }
           if(i== n-1 && arr[i]> arr[i-1]){
               return i;
           }
       }
       return -1;
    }
};