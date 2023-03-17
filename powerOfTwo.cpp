class Solution {
public:

    //using bit manipulation
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return((n & (n-1))==0);
    }

    //using recursion
    // bool isPowerOfTwo(int n) {
    //     if(n==0) return false;
    //     //base case
    //     if(n==1) return n;

    //     return (n%2==0 && isPowerOfTwo(n/2));
    // }
};