class Solution {
public:
    vector<int> diStringMatch(string s) {
        int start=0, end= s.length();
        vector<int> v;
        for(int i=0;i< s.length();i++){
            if(s[i] == 'I'){
                v.push_back(start);
                start++;
            }
            if(s[i] == 'D'){
                v.push_back(end);
                end--;
            }
        }
        v.push_back(end);
        return v;
    }
};