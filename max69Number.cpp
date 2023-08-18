class Solution {
public:
    int maximum69Number (int num) {
        //T= O(N), S= O(1)
        string s= to_string(num);
        int maxi = num;
        for(int i=0;i<s.size();i++){
            if(s[i] == '6'){
                s[i]= '9';
            int upd= stoi(s);
            maxi = max(maxi, upd);
            s[i]='6';
            }
        }
        return maxi;
    }
};