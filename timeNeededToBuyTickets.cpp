class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n= tickets.size();
        int c=0, i=0;
        while(tickets[k] != 0){
            if(i == n){
                i=0;
            }

            if(tickets[i] == 0){
                i++;
                continue;
            }
            tickets[i]--;
            c++;
            i++;
            }
        return c;
    }
};