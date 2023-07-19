class Solution {
public:
    static bool comparator(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //optimal-> T= O(nlogn)+O(n), S=O(1)
        //greedy approach
        sort(intervals.begin(), intervals.end(), comparator);
        int count=1, prev=0;
        int n= intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0] >= intervals[prev][1]){
                count++;
                prev=i;
            }
        }
        return n-count;
    }
};