class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int i=0,j=0,mx=0,ex=0;
        int n= s.size();
        while(j<n){
            if(s[j]=='F'){
                ex++;
                while(ex>k){
                    if(s[i]=='F')ex--;
                    i++;
                }
            }
            mx= max(mx,j-i+1);
            j++;
        }
        i=0,j=0,ex=0;
        while(j<n){
            if(s[j]=='T'){
                ex++;
                while(ex>k){
                    if(s[i]=='T')ex--;
                    i++;
                }
            }
            mx= max(mx,j-i+1);
            j++;
        }
        return mx;
    }
};