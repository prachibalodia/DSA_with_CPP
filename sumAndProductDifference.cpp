class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0, p=1, d;
        while(n>0){
            d= n%10;
            s+= d;
            p*= d;
            n/=10;
        }
        return p-s;
    }
};