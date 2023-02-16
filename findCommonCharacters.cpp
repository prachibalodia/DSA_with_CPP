//find common characters in an array of strings
#include<string>
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      vector<string> v;
      vector<int> c1(26, INT_MAX);

      for(auto s: words){
        vector<int> c2(26,0);
        for(auto c: s){
            c2[c- 'a']++;
        }

        for(int i=0;i< 26;i++){
            c1[i] = min(c1[i], c2[i]);
        }
      }

      for(int i=0;i<26;i++){
        for(int j=0;j< c1[i];i++){
            v.push_back(string(1, i+'a'));
        }
      }
      return v;
        
    }
};