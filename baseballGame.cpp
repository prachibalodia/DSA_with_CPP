class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int> v;
        for(int i=0;i< op.size();i++){
            if(op[i] == "D"){
                int n= v.size();
                v.push_back(2* v[n-1]);
            }
            else if(op[i] == "C"){
                int n= v.size();
                v.pop_back();
            }
            else if(op[i] == "+"){
                int n= v.size();
                v.push_back(v[n-1] + v[n-2]);
            }
            else{
                v.push_back(stoi(op[i]));
            }
        }
        int r=0;
        for(int i=0;i< v.size();i++){
            r+= v[i];
        }
        return r;
    }
};