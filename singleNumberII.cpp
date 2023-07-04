class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //brute force-> T= O(N)*2, S= O(N) 
        // map<int,int>m;
        // for(auto i:nums){
        //     m[i]++;
        // }
        // for(auto i:m){
        //     if(i.second == 1)
        //     return i.first;
        // }
        // return -1;

        //optimal-> 
        //using bit manipulation
        int n= nums.size();
        int ans=0;
        for(int i=0;i<32;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(((nums[j]>>i) & 1)==1){
                    sum++;
                    sum%=3;
                }
            }
            if(sum!=0){
                    ans|= sum<<i;
            }
        }
        return ans;        
    }
};