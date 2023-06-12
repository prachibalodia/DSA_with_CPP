class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        //passing 3 test cases and gives runtime error
        // vector<string> s;
        // int n= nums.size();
        // int i=0;
        // int j=1;
        // while(i<=n && j<=n){
        //     if(nums[j] != nums[j-1]+1){
        //         if(i!=j-1)
        //         s.push_back(to_string(nums[i])+"->"+to_string(nums[j-1]));
        //         else
        //         s.push_back(to_string(nums[i]));
        //         i=j;
        //         j++;
        //     }
        //     else{
        //         j++;
        //     }
        // }
        // return s;



        int n=nums.size();
        vector<string>s;
        for(int i=0;i<n;i++){
            int j=i;
            while(j+1<n && nums[j]+1 == nums[j+1]){
                j++;
            }
            if(i < j){
                s.push_back(to_string(nums[i])+"->"+to_string(nums[j]));
            }
            else{
                s.push_back(to_string(nums[i]));
            }
            i=j;
        }  
        return s;  
        }
};