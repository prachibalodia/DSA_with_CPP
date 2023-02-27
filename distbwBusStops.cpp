class Solution {
public:
    int distanceBetweenBusStops(vector<int>& dist, int start, int destination) {
        int s1=0, s2=0;
        if(start > destination){
            swap(start, destination);
        }
        for(int i=0;i<dist.size();i++){
            if(i>= start && i< destination){
                s1+= dist[i];
            }
            else{
                s2+= dist[i];
            }
        }
        return min(s1,s2);
    }
};