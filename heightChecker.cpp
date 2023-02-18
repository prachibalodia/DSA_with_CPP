class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> h(heights.size(), 0);
        for(int i=0;i< heights.size();i++){
            h[i]= heights[i];

        }
        sort(h.begin(), h.end());
        vector<int> exp(heights.size(), 0);

         for(int i=0;i< h.size();i++){
            exp[i]= h[i];

        }

        int c=0;
        for(int i=0;i< exp.size();i++){
            if(exp[i] != heights[i]){
                c++;
            }
        }

        return c;
        
        
    }
};