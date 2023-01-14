//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        
        // code here
        int buy, sell;
        vector<vector<int>> v;
        for(int i=0;i<n-1;i++){
            if(A[i+1]-A[i]>0){
            buy= i;    
            while(A[i]< A[i+1] && i<n-1){
                i++;
            }
            sell= i;
            v.push_back({buy, sell});
        }
        }
        return v;
    }
};