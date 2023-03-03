class Solution {
public:
    string removeOuterParentheses(string s) {

        stack<char> st;
        string ans;
        for(auto i: s){
            if(i == '('){
                if(!st.empty()){
                    ans.push_back(i);
                }
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    ans.push_back(i);
                }
            }
        }
        return ans;
        // stack<char> st;
        // for(auto i: s){
        //     if(st.empty()){
        //         st.push(i);
        //     }
        //     else{
        //         if(i == st.top()){
        //             st.pop();
        //             st.push(i);
        //         }
        //         else{
        //             st.push(i);
        //         }
        //     }
        // }
        // string ans;
        // while(!st.empty()){
        //     ans= st.top()+ans;
        //     st.pop();
        // }
        // return ans;
        
    }
};