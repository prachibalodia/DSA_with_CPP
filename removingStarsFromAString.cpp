class Solution {
public:
    string removeStars(string s) {
        // stack<char> st;
        // st.push(s[0]);
        // for(int i=1;i<s.size();i++){
        //     char c= s[i];
        //     if(c == '*'){
        //         st.pop();
        //     }
        //     else{
        //         st.push(c);
        //     }
        // }
        // string newS= "";
        // while(!st.empty()){
        //     //newS= st.top() + newS; //gives TLE
        //     newS+= st.top();
        //     st.pop();
        // }
        // reverse(newS.begin(), newS.end());
        // return newS;


        //optimized- using two pointers approach

        int i, j=0;
        for(i=0;i<s.size();i++){
            if(s[i] == '*'){
                j--;
            }
            else{
                s[j++]= s[i];
            }
        }
        return s.substr(0,j);
    
    //will give runtime error, and we cant even define the vector size at first to eliminate runtime error, as then we'll have to assign the value as well
    //     vector<char>st;
    //     st.push_back(s[0]);
    //      for(int i=1;i<s.size();i++){
    //         st.push_back(s[i]);
    //         if(s[i] == '*'){
    //             st.pop_back();
    //             st.pop_back();
    //         }
    //     }
    //     string newS;
    //    for(auto i: st){
    //        newS+= st[i];
    //    }
    //     return newS;
    }
};