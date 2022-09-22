class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar;
        int maxProfit=0, maxP=0;
        for(int i=0;i< prices.size();i++){
            minSoFar= min(minSoFar, prices[i]);
             maxP= prices[i]-minSoFar;
            
             maxProfit= max(maxProfit, maxP);
            
        }
        return maxProfit;
    }
};