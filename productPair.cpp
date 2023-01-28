class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        // code here
      map<long, long> m;
      for(int i=0;i<n;i++){
          m[arr[i]]++;
      }
      
      for(int i=0;i<n;i++){
          if(arr[i] != 0 && x%arr[i]==0 && (m.find(x/arr[i]) != m.end())){
              return true;
          }
          
          if(arr[i] ==0 && x==0){
              return true;
          }
      }
      
      return false;
        //time limit exceeds
        // bool b=false;
        // for(int i=0;i<n;i++){
        //     for(int j= i+1;j<n;j++){
        //         if(arr[i]*arr[j] == x){
        //             b=true;
        //         }
        //     }
        // }
        // return b;
    }
};