class Solution {
public:
    bool wordPattern(string pattern, string s) {
    vector<string> vs;
    string st="";
    for(int i=0;i<s.size();i++){
        if(s[i] != ' '){
            st+= s[i];
        }
        else{
           vs.push_back(st);
            st="";
        }
    }
    vs.push_back(st); //for the last word

    if(vs.size() != pattern.size()){
        return false;
    }

    unordered_map<string, char> m1;
    unordered_map<char, string> m2;

    for(int i=0;i<pattern.size();i++){
        if(m1.count(vs[i]) && m1[vs[i]] != pattern[i]){
            return false;
        }
        if(m2.count(pattern[i]) && m2[pattern[i]] != vs[i]){
            return false;
        }

        m1.insert(pair<string, char>(vs[i], pattern[i]));
        m2.insert(pair<char, string>(pattern[i], vs[i]));

    }
    return true;
    }
};