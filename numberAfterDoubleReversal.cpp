class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n= num,d=0,r=0;
        while(n>0){
            d= n%10;
            r=r*10+d;
            n/=10;
        }
        int rr=0;
        while(r>0){
            d= r%10;
            rr=rr*10+d;
            r/=10;
        }
        return rr==num;
    }
};