class Solution {
public:
    bool buddyStrings(string s, string goal) {
        //approach 1
        // int n= s.size(), m= goal.size();
        // if(n != m || n<=1) return false;
        // //checking for same string and repeating chars
        // if(s==goal){
        //     set<char>st(s.begin(),s.end());
        //     return st.size()<s.size();
        // }

        // //if diff chars
        // vector<int>v;
        // for(int i=0;i<n;i++){
        //     if(s[i] != goal[i]){
        //         v.push_back(i);
        //     }
        // }
        // if(v.size() !=2) return false;
        // else{
        //     swap(s[v[0]],s[v[1]]);
        // }
        // return s==goal;
        
        //approach 2
        int n= s.size(), m= goal.size();
        int i=0,j=n-1;
        if(n != m)return false;
        if(s== goal){
            set<char>st(s.begin(),s.end());
            return st.size()<s.size();
        }
        while(i <j && s[i]==goal[i])i++;
        while(j>-0 && s[j] == goal[j]) j--;

        if(i<j) swap(s[i],s[j]);
        return s==goal;
    }
};