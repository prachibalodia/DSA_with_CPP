class Solution {
public:
    int xorOperation(int n, int start) {
        //T= O(N), S=O(N)
        vector<int>nums;
        int x=0,nn=0,i=0;
        while(n--){
            nn= start+2*i;
            i++;
            x^=nn;
        }
        return x;
    }
};