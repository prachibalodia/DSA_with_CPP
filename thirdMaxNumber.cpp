class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>> s;
        for(int i: nums){
            s.insert(i);
        }
    //    set<int>::iterator it = s.begin();
        if(s.size() < 3){
            int x= *s.begin();
            return x;
        }
        else{
            // it= s.begin;
            // ++it;
            //++it;
            //return *it; 
            int x= *next(s.begin(), 2);
            return x;
        }
    }
};