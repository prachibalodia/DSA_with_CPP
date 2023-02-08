class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size(), "");
        map<int, int> m; //score >- pos

        for(int i=0;i<score.size();i++){
            m[score[i]]= i;
        }

        sort(score.begin(), score.end(), greater<int>());
        for(int i=0;i<score.size();i++){
            if(i+1 == 1){
                ans[m[score[i]]]= "Gold Medal";
            }
            else if(i+1 == 2){
                ans[m[score[i]]]= "Silver Medal";
            }
            else if(i+1 == 3){
                ans[m[score[i]]]= "Bronze Medal";
            }
            else{
                ans[m[score[i]]]= to_string(i+1);
            }

        }
        return ans;
    }
};