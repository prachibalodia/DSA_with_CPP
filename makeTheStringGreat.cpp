class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(auto i: s){
            if(st.empty()){
                st.push(i);
            }
            else{
                if(abs(i- st.top()) == 32){
                    st.pop();
                }
                else{
                    st.push(i);
                }
            }                            
        } 
        string ans;

        while(!st.empty()){
            ans= st.top()+ ans;
            st.pop();
        }       
        return ans;
    }
};