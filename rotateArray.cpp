class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        // //brute force
        // d= d%n;
        // int ar[d];
        // int j=0;
        // for(int i=d;i<n;i++){
        //     ar[j]= arr[i];
        //     j++;
        // }
        // for(int i=0;i<d;i++){
        //     ar[j]= arr[i];
        //     j++;
        // }
        // for(int i=0;i<n;i++){
        //     arr[i]= ar[i];
        // }
        d= d%n;
        reverse(arr, arr+d);
        reverse(arr+d, arr+n);
        reverse(arr, arr+n);
        
    }
};