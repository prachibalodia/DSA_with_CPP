class Solution {
public:
    long long findScore(vector<int>& nums) {
        set<pair<long long, long long>> s;
        int n=nums.size();

        //creating a vector to track visited or not
        vector<int> vis(n,0);
        
        //inserting all the numbers along with their indexes
        for(int i=0;i<n;i++){
            s.insert({nums[i],i});
        }

        long long result=0;
        for(auto x: s){
            int index= x.second;
            if(vis[index] == 0){ //if not visited then

            result+= x.first;
            vis[index]=1;
            if((index-1)>=0) vis[index-1]=1;
            if((index+1) <n) vis[index+1]=1;
            }
        }
        return result;
    }
};