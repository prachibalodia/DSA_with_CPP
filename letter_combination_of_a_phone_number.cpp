class Solution {
public:
    void solve(int ind, string digits, vector<string>&m, string temp, vector<string>&ans){
        int n= digits.size();
        if(ind == n){
            if(temp.size())
            ans.push_back(temp);
            return;
        }
        int num= digits[ind]-'0';
        string mp= m[num];

        for(int i=0;i<mp.size();i++){
            temp.push_back(mp[i]);
            solve(ind+1, digits, m,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        //optimal-> T= O(n!*k), S=O(k*x), where k is the average size of element in the map, and x is the size of map
        vector<string> m= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string temp;

        solve(0,digits,m,temp,ans);
        return ans;
    }
};