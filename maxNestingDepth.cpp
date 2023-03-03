class Solution {
public:
    int maxDepth(string st) {
        stack<char> s;
        int max=0;
        for(int i=0;i< st.size();i++){
            if(st[i] == '('){
                s.push('(');
            }
            else if(st[i] == ')'){
                if(s.size() > max){
                    max= s.size();
                }
                s.pop();

            }
        }
        return max;
        
    }
};