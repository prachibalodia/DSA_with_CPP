class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {

        //here we specify that the time is 0 to 100000000, that the trip wont take less
        //than zero and more than 10 to the power 14 to complete
        //mid/time[i] will give the number of trips by each bus
        //count+= mid/time[i] sums up the number of trips
        //binary search concept
        //now this count will be compared to totalTrips each time

        long long l=0, u= 100000000000000, ans= u;
        while(l<u){
             long long mid= (l+u)/2;
             long long count=0;
             for(int i=0;i< time.size();i++){
            count+= mid/ time[i];
        }
         if(count >= totalTrips){
             ans= min(ans, mid);
             u= mid;
         }    
         else{
             l= mid+1;
         }
        }   
        return ans;
    }
};