class Solution {
public:
    string removeTrailingZeros(string num) {
        string s= num;
        int n= s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                s.erase(i);
            }
            else{
                break;
            }
        }
        return s;
    }
};