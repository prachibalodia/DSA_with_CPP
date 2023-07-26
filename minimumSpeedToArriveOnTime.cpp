class Solution {
public:

    bool solve(vector<int>& dist,int speed, double hour){
        int n= dist.size();
        double ans=0;
        for(int i=0;i<n-1;i++){
            if(dist[i] % speed ==0){
                ans+= dist[i]/speed;
            }
            else{
                ans+= dist[i]/speed +1;
            }
        }

        ans+= (double)dist[n-1]/(double)speed;
        if(ans>hour)return false;
        return true;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {

        //T= O(Nlog(10^7))

        //here our answer space is 1 to 1e7 i.e i* 10^7
        //that means we can have our speed anywhere between 1 to 1e7
        //also we need to compare and match with the given time
        //so, s= d/t =>  t= d/s

        //since our answer spce is sorted, we go for binary search

        //intuition-> if the speed chosen gives time < given time, it can bs stored in ans-> but wait
        //we need to find the minimum time-> sp we do e= mid-1
        //also, if time calculated > given time, s= mid+1 (since we need to increase our speed)
        int s= 1;
        int e= 1e7;
        int ans=-1;
        while(s<=e){
            int mid= (s+e)/2;
            if(solve(dist, mid, hour)){
                ans= mid;
                e= mid-1;
            }
            else{
                s= mid+1;
            }
        }
        return ans;
    }
};