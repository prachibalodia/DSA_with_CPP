class Solution {
public:
    bool isPowerOfFour(int n) {
        //iterative
        // if(n==0) return false;
        // while(n%4 == 0){
        //     n/=4;
        // }
        // return n==1;

        //recursion
        if(n==0) return false;
        if(n==1) return true;

        return n%4==0 && isPowerOfFour(n/4);
    }
};