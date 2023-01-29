class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int c=0;
        for(auto x: m){
            if(x.second > n/k){
               c++;
            }
        }
        return c;
    }
};