class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        vector<int> ind;

        for(int i=0;i<s.size();i++){
            if(s[i] == c){
                ind.push_back(i);
            }
        }

        for(int i=0;i< s.size();i++){
            int dist= INT_MAX;
            for(int j= 0; j< ind.size();j++){
                dist= min(dist, abs(i- ind[j]));
            }
            ans.push_back(dist);
        }
        return ans;
    }
};