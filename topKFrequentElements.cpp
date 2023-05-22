class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>m;
        for(auto x: nums){
            m[x]++;
        }
        vector<int> ans;
        priority_queue<pair<int, int>> pq; 
        //as pq can store values in descending order by default and repeated values are     allowed. Pair is used with it to make pairs of the first and second values;

        for(auto x: m){
            pq.push(make_pair(x.second, x.first));
        }

        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};