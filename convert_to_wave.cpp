class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        int j=0;
        for(int i=1;i<n;i+=2){
            swap(arr[j], arr[i]);
            j+=2;
        }
    }
    
    
    // int i=0;
    // while(j<n){
    //     swap(arr[i], arr[j]);
    //     j+=2;
    //     i+=2;
    // }