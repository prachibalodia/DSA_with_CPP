class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //O(n^2)
        // int c=0;
        // int m= grid.size();
        // int n= grid[0].size();
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(grid[i][j] <0)c++;
        //     }
        // }
        // return c;

        //using upperbound iterator-> O(n)
        //upperbound-> returns an iterator to the index such that values is not greater than the specified value
        //lowerbound-> returns an iterator to the index such that value is not less than the specified value

        int n= grid.size();
        int c=0;
        int ub;
        for(int i=0;i<n;i++){
            ub= upper_bound(grid[i].rbegin(), grid[i].rend(),-1) - grid[i].rbegin();
            c+=ub;
        }
        return c;
    }
};