class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int sizeof_array)
    {
        
        // your code here
        int o=0, e=0;
        for(int i=0;i<sizeof_array;i++){
            if(arr[i] % 2 != 0){
                o++;
            }
            else{
                e++;
            }
        }
        cout<<o<<" "<<e<<endl;
       
        
    }
};