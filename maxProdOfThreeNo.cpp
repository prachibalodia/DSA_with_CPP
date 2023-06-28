class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //brute force-> T= O(N), S=O(1)
        // int maxi=INT_MIN;
        // int prod=1;
        // int n= nums.size();
        // for(auto i: nums){
        //     prod*=i;
        //     maxi= max(maxi,prod);
        // }
        // return maxi;

        //optimal-> T= O(nlogn), S= O(1)
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int p1= nums[0]*nums[1]*nums[n-1];
        int p2= nums[n-1]*nums[n-2]*nums[n-3];
        return max(p1,p2);
    }
};