class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
   
        // Your code here
        if(n==0 || n==1){
            return n;
        }
        
        int s1=0, s2=0;
        for(int i=0;i<n;i++){
            s2+= a[i];
        }
        
        
        for(int i=0;i<n;i++){
            s2-= a[i];
            
            if(s1==s2) return i+1;
            
            s1+= a[i];
        }
        return -1;
        
    }

};