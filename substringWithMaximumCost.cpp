class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        map<char, int> m;
        if(s.size()==0){
            return 0;
        }
        int x=0;
        for(auto i:chars){
            m[i]= vals[x];
            x++;
        }
        
        for(auto i:s){
            if(m.count(i) == 0){
                m[i] = (int(i)-97)+1;
            }
        }
        
        int cs=0, largest=m[s[0]];
        for(auto i:s){
            cs+= m[i];
            if(cs<0){
                cs=0;
            }
            largest= max(largest, cs);
        }
        return largest;
        
    }
};