class Solution {
public:
    string convertToTitle(int n) {
        //T= O(N), S=O(1)
        string ans;
        while(n>0){
            ans= char('A' + (n-1)%26) +ans;
            n= (n-1)/26;
        }
        return ans;
    }
};