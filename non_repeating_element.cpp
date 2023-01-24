class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        
        
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(int j=0;j<n;j++){
            if(m[arr[j]] == 1){
                return arr[j];
            }
        }
        // for(auto x: m){
        //     if(x.second == 1){
        //         return x.first;
        //     }
        // }
        return 0;
        
    } 
  
};