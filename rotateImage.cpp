class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // int n= matrix.size();
        // int n1= matrix[0].size();
        // vector<vector<int>> m(n,vector<int>(n1,0));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++)
        //     m[j][n-1-i] = matrix[i][j];
        // }
        // for(int i=0;i<n;i++){
        //     matrix[i]= m[i];
        // }


        //or
        //rotate= transpose and then reverse
        int n= matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)
           swap(matrix[i][j], matrix[j][i]);
        }
        for(int i=0;i<n;i++){
           reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};