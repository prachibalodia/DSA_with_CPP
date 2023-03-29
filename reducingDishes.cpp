class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        //greedy approach as kadane's algo to find max subarray sum
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        int cs=0, mx=0;
        for(int i=0;i<satisfaction.size();i++){
            cs+= satisfaction[i];
            if(cs<0){
                break;
            }
            mx+= cs;
        }
        return mx;

        //by prefix sum method
        // sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        // vector<int> psum= satisfaction;
        // int n= satisfaction.size();
        // for(int i=1;i<n;i++){
        //     psum[i]+= psum[i-1];
        // }

        // int cur=0, mx=0;
        // for(int i=0;i<n;i++){
        //     cur+= psum[i];
        //     mx= max(cur, mx);
        // }
        // return mx;

        //Intuitive Approach- wrong output
        // int cs=0,j=0;
        // sort(satisfaction.begin(), satisfaction.end());
        // for(int i=0;i<satisfaction.size();i++){
        //     if(satisfaction[i]<0){
        //         continue;
        //     }
        //     else{
        //          cs+= satisfaction[i] *(j+1);
        //          j++;
        //     }
        // }
        // return cs;
        
    }
};