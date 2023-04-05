class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto i: s){
            if(isupper(i)){
                i= tolower(i);
            }
            if(isalnum(i)){
                str+= i;
            }
        }

        string rev= str;
        reverse(rev.begin(), rev.end());
        return str==rev;

        //naive approach
        // queue<char>q;
        // stack<char>st;
        // for(int i=0;i<s.size();i++){
        //     if(isalpha(s[i]) || isdigit(s[i])){
        //         q.push(s[i]);
        //         st.push(s[i]);
        //     }
        // }
        // while(!(st.empty())){
        //      if(q.front() != st.top()){
        //          return false;
        //      }
        // }
        // return true;
        
    }
};