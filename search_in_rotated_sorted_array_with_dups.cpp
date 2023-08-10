class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //binary search-> T=O(nlogn), S= O(1)
        int n= nums.size();
        int s= 0, e= n-1;

        while(s<=e){
            int mid= (s+e)/2;
            if(nums[mid] == target) return true;
            
            //to deal with the duplicates, we put this condition separately
            if(nums[s] == nums[mid] && nums[e] == nums[mid]){ 
                s++;
                e--;
            }

            else if(nums[s]<= nums[mid]){ //left part is sorted
                if(nums[mid] >= target && nums[s]<=target){//element found
                    e= mid-1;
                }
                else{
                    s= mid+1;
                }
            }
            else { //right part is sorted
                if(nums[mid]<= target && nums[e]>= target){
                    s= mid+1;
                }
                else{
                    e= mid-1;
                }
            }
        }
        return false;
    }
};