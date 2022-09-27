class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        
        map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=1;
        }
        int c=0;
        for(int i=0;i<m;i++){
            if(mp[b[i]]){
                c++;
            }
            mp[b[i]]=0;
        }
        return c;
        
        //85 out of 90 test cases passed
        //this code doesn't work for large input
        // map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[a[i]]++;
        // }
        //  for(int i=0;i<m;i++){
        //     mp[b[i]]++;
        // }
        // int c=0;
        // for(auto i: mp){
        //     if(i.second>1){
        //         c++;
        //     }
        // }
        // return c;
    }
};