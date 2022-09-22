class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
       //we take all the threee cases of 0.
       //presence of multiple zeros
       //presence of one zero
       //non-zero
       
       //presence of multiple zeros
       int zero=0;
       for(int i=0;i<n;i++){
           if(nums[i] == 0)
           zero++;
       }
       
        vector<long long int> ans;
        if(zero>1){
            for(int i=0;i<n;i++){
            ans.push_back(0);
        }
        return ans;
        }
        
        else if(zero==1){
            long long int p=1;
            for(int i=0;i<n;i++){
                if(nums[i] != 0){
                    p*= nums[i];
                }
            }
            
            for(int i=0;i<n;i++){
                if(nums[i] == 0){
                    ans.push_back(p);
                }
                else{
                    ans.push_back(0);
                }
            }
            return ans;
        }
        
        
        else{
             long long int p=1;
            for(int i=0;i<n;i++){
                    p*= nums[i];
            }
            
            for(int i=0;i<n;i++){
                ans.push_back(p/nums[i]);
                
            }
            return ans;
        }
        
       
       
        // //code here 
        //my approach(partially correct)
        // long long int p=1;
        // for(int i=0;i<n;i++){
        //     p*= nums[i];
        // }
        // long long int p1=0;
        
        // vector<long, long int> v;
        // for(int i=0;i<n;i++){
        //     p1= p/nums[i];
        //     v.push_back(p1);
        // }
        // return v;
    }
};