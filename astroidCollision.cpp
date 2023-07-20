class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n= a.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            if(s.empty() || a[i]>0) s.push(a[i]);
            else{
                while(!s.empty() && s.top()>0 && s.top()<abs(a[i])) s.pop();

            if(!s.empty() && s.top()== abs(a[i]))s.pop();
            else{
                if(s.empty() || s.top()<0)s.push(a[i]);
            }
            }
        }
        vector<int>v(s.size(),0);
        int sz= s.size();
        while(!s.empty()){
            v[--sz]=s.top();
            s.pop();
        }
        return v;
    }
};