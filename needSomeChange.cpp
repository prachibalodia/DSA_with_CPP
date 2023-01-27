//User function Template for C++

/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
        // Your code here
        int temp;
        for(int i=0;i<sizeof_array-2;i++){
            temp= arr[i];
            arr[i]= arr[i+2];
            arr[i+2]= temp;
        }
        
    }
};