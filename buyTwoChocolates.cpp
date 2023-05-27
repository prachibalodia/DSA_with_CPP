class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int s=prices[0]+prices[1];
        if(money-s >= 0){
            return money-s;
        }
        return money;
        
    }
};