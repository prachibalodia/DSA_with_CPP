class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int s=left;
        // if(left==0 && right==0){
        //     return 0;
        // }
        if(left == right){
            return left;
        }
        for(long long int i= left+1;i<=right;i++){
            s&=i;
            if(s==0) return s;
        }
        return s;
    }
};