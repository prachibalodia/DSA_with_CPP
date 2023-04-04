class Solution {
public:
    int partitionString(string s) {

        //approach 2- using bit-mapping

        int flag=0,i=0,ans=1;
        while(i<s.size()){
            int val= s[i]-'a';
            if(flag & (1<<val)){
                flag=0;
                ans++;
            }
            flag= flag | (1<<val);
            i++;
        }
        return ans;

        //approach 1- using sets- intuition
        // int c=1;
        // unordered_set<char> st;
        // for(int i=0;i<s.size();i++){
        //     if(st.count(s[i]) != 0){
        //         c++;
        //         st.clear();
        //     }
        //     st.insert(s[i]);
        // }
        // return c;
    }
};