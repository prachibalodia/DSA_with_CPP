class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //easiest approach
         sort(a, a+n);
        
        
        //time limit gets exceeded
    //    
    //   vector<int> r;
    //   for(int i=0;i<n;i++){
    //       r.push_back(a[i]);
    //   }
    //   sort(r.begin(), r.end());
       
    //   for(int i=0;i<n;i++){
    //       a[i]= r[i];
    //   }
    
    
    //correct
    // int x=0, y=0, z=0;
    // for(int i=0;i<n;i++){
    //     if(a[i]==0)
    //     x++;
    //     else if(a[i]== 1)
    //     y++;
    //     else
    //     z++;
    // }
    // int x=0, y=0, z=0;
    // for(int i=0;i<n;i++){
    //     if(x!=0){
    //         a[i]=0;
    //         x--;
    //     }
    //     else if(y!= 0){
    //         a[i]=1;
    //         y--;
    //     }
    //     else{
    //         a[i]=2;
    //         z--;
            
    //     }
    // }
    }
    
};