class Solution {
public:
    bool backspaceCompare(string t1, string t2) {
        string a1, a2;
        stack<char> s1,s2;
        for(auto i: t1){
            if(i == '#'){
                if(s1.empty()){
                    continue;
                }
                s1.pop();
            }
            else{
                s1.push(i);
            }
        }
        for(auto i: t2){
            if(i == '#'){
                 if(s2.empty()){
                    continue;
                }
                s2.pop();
            }
            else{
                s2.push(i);
            }
        }

        while(!s1.empty()){
            a1= s1.top()+ a1;
            s1.pop();
        }
         while(!s2.empty()){
            a2= s2.top()+ a2;
            s2.pop();
        }
        int n1= a1.size(), n2= a2.size();
        int c=0;
        for(int i=0;i<n1 && i<n2;i++){
            if(a1[i] == a2[i]){
                c++;
            }
        }
        if(c == n1 && c== n2){
            return true;
        }
        return false;
    }
};