class Solution {
public:
double power(double x, int n){
    if(n==0){
            return 1;
        }
        return x* power(x,n-1);
}
    double myPow(double x, int n) {
    // return pow(x,n);
     if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
     if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        
        double p;
        if(n>0){
            p= power(x,n);
        }
        else{
            n= abs(n);
            p= 1.0/power(x,n);
        }      
        return p;
    }
};