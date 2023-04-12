class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        string ans;

        for(int i=0;i<path.size();i++){
            if(path[i] == '/'){
                continue;
            }
            
            string temp;
            while(i< path.size() && path[i] != '/'){
                temp+= path[i];
                i++;
            }

            if(temp == "."){
                continue;
            }
            else if(temp == ".."){
                if(!st.empty())
                st.pop();
            }
            else{
                st.push(temp);
            }
        }

        while(!st.empty()){
            ans= "/" + st.top() + ans;
            st.pop();
        }

        if(ans.size() == 0){
            return "/";
        }
       
        return ans;

        //only 40 test cases pass- hardcoded
        // stack<char> st;
        // st.push(path[0]);
        // for(int i=1;i<path.length();i++){
        //     if(i == path.length()-1 && path[i] == '/'){
        //         continue;
        //     }
        //     if((st.top() == '/' && path[i] == '/') || path[i] == '.' ){
        //         continue;
        //     }
        //     else{
        //         st.push(path[i]);
        //     }
        //     }
        // string ans="";
        // while(!st.empty()){
        //     // if(st.size() == 1 && st.top() == '/'){
        //     //     continue;
        //     // }
        //     ans+= st.top();
        //     st.pop();
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;
        
    }
};