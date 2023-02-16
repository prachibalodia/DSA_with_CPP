class Solution {
public:
    vector<int> numberOfLines(vector<int>& width, string s) {
        int c= 0, a=1;

        for(int i= 0;i<s.length();i++){
            char ch= s[i]- 'a';

            if(c+ width[ch] >100){
                c= width[ch];
                a++;
            }
            else
            c+= width[ch];
        }
        return {a, c};

        
    }
};