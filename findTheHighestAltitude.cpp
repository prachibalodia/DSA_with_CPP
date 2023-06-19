class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n= gain.size();
        int maxi =INT_MIN;
        int s=0;
        for(int i=0;i<n;i++){
            s+=gain[i];
            maxi = max(maxi, s);
        }
        if(maxi <0){
            return 0;
        }
        return maxi;
    }
};