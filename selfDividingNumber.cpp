class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int n,x;
        vector<int> v;
        for(int i=left;i<=right;i++){
            n=i;
            x=i;
            bool flag= false;
            while(x>0){
                int d= x%10;
                if(d !=0 && n% d == 0) {
                    flag= true;
                }
                else{
                    flag=false;
                    break;
                }
                x=x/10;
            }
            if(flag){
                v.push_back(n);
            }
        }
        return v;
    }
};