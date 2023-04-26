class Solution {
public:
    int help(int num){
        int sum=0, d;
        while(num>0){
            d= num%10;
            sum+=d;
            num=num/10;
        }
        if(!(sum>0 && sum<10)){
            return help(sum);
        }
        return sum;
    }
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        return help(num);

        //or
        // int sum=0;
        // while(num){
        //     sum+= num%10;
        //     num=num/10;
        // }

        // if(sum<10){
        //     return sum;
        // }
        // else
        // return addDigits(sum);
    }
};