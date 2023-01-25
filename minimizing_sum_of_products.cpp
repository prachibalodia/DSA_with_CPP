class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+n);
        int i=0, j=n-1;
        long long int r=0;
        
        while(i<n){
            r+= a[i] * b[j];
            i++;
            j--;
        }
        return r;
    }
};