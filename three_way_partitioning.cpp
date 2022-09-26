class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
       //brute force approach
    //   for(int i=0;i<array.size();i++){
    //         if(a[i]< a){
    //             a[i]= a[i];
    //         }
            
    //     }
    //but if carefully examined, we just need to sort the given array
    sort(array.begin(), array.end());
    }
};