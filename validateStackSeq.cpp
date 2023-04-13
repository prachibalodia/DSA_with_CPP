class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        //using stack- complexity- O(n)
        // stack<int> st;
        // int j=0;
        // for(auto n: pushed){
        //     st.push(n);
        //     while(st.size()>0 && popped[j] == st.top()){
        //         st.pop();
        //         j++;
        //     }
        // }
        // return st.size() ==0;

        //using pushed vector as the stack- complexity- O(1)
        int i=0,j=0;
        for(auto n: pushed){
            pushed[i++]= n;
            while(i>0 && popped[j] == pushed[i-1]){
                j++;
                i--;
            }
        }
        return i==0;
    }
};