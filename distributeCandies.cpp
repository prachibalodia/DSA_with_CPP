class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n= candyType.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[candyType[i]]++;
        }
        int s= m.size();
        if(s> n/2){
            return n/2;
        }
       return s;
    }
};