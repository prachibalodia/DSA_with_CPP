class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        //approach 1- Recursion, but of complexity O(2^n), can give TLE
        //in recursion we travel only right and down

        //approach 2- DP
        //here we use the summed up values of upside and left values and get add the 
        //minimum one
        int rows= grid.size();
        int cols= grid[0].size();

        for(int i=1;i<rows;i++){
            grid[i][0]+= grid[i-1][0];
        }

        for(int i=1;i<cols;i++){
            grid[0][i]+= grid[0][i-1];
        }


        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                grid[i][j]+= min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[rows-1][cols-1];

    }
};