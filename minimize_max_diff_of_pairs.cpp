class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        //since min max is given, we should think about binary search
        //T=O(nlogn)+O(nlogn) for sorting, S=O(1)
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int l=0, r= nums.back()-nums.front();
        while(l<r){
            int m= l+(r-l)/2;
            int c=0;
            for(int i=1;i<n;i++){
                if(nums[i]-nums[i-1] <=m){
                    c++;
                    i++;
                }
            }
            if(c<p){
                l= m+1;
            }
            else{
                r= m;
            }
        }
        return l;
    }
};