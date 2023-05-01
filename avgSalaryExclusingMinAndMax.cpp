class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int n= salary.size();
        double sum=0;
        for(int i=0;i<n;i++){
            sum+= salary[i];
        }
        double ans;
        sum= sum- salary[0]-salary[n-1];
        ans= sum/(n-2);
        return ans;
    }
};