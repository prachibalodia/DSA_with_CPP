class Solution {
public:
    int minFlips(int a, int b, int c) {
        //or
        //1 0 - 1
        //0 1 - 1
        //1 1 - 1
        //0 0 - 0
        //three cases can be there
        //if current bit(b3) of c=0 -> both b1 and b2 should be 0 ->2 shifts required
        //if b3=1 -> one shift of either b1 or b2
        long b1,b2,b3;
        long s=0;
        while(a>0 || b>0 || c>0){
            b1=a&1;
            b2=b&1;
            b3=c&1;
            if(b3==0){
                s+= b1+b2;
            }
            else{
                if(b1==0 && b2==0){
                    s++;
                }
            }
            //right shift or div by 2 to get the next bit
           a>>=1;
           b>>=1;
           c/=2;
        }
        return s;
    }
};