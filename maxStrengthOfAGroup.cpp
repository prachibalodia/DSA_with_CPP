class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        long long sum=1,ans=0;
        bool b=0;
        vector<int>v;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1) b=1;
            if(nums[i]!=0){
            if(nums[i] >0) sum*= nums[i];
            else {
            c++;
            v.push_back(nums[i]);
            }
            }
        }
        if(c%2!=0) v.pop_back();
        for(int i=0;i<v.size();i++){
            sum*= v[i];
        }
        if(sum>1){
            ans=sum;
        }
        if(ans == 0 && b==1){
            ans=1;
        }
        return ans;
    }
};