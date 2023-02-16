class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> v;
        map<int, int> m;
        for(int i=0;i< bills.size();i++){
            if(bills[i] == 5){
                m[5]++;
            }

            else if(bills[i] == 10){
                m[10]++;
                if(m[5] == 0)
                return false;

                else
                m[5]--;
            }
            else if( bills[i] == 20){
                if(m[10] > 0){
                    m[10]--;
                    if(m[5] ==0)
                    return false;

                    else
                    m[5]--;
                }
                else if(m[5] >= 3){
                    m[5]--;
                    m[5]--;
                    m[5]--;
                }
                else
                return false;
            }
        }
        return true;
        
    }
};