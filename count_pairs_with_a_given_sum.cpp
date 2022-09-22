class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
    //   map<int,int> m;
    //   for(int i=0;i<n;i++){
    //       m[a[i]]++;
    //   }
    //   int tcount=0;
    //   for(int i=0;i<n;i++){
    //       tcount+= m[k-a[i]];
    //       if((k-a[i]) == a[i]){
    //           tcount--;
    //       }
    //   }
      
    //   return tcount/2;
      
        unordered_map<int,int> m;
        int i=0, c=0;
        while(i<n){
            if(m.find(k-a[i]) != m.end()){
                c+= m[k-a[i]];
            }
            
            m[a[i]]++;
            i++;
        }
        return c;
    }
};