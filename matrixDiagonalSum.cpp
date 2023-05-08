class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // if(mat.size()== 1 && mat[0].size()==1){
        //     return mat[0][0];
        // }
        // int ps=0, ss=0;
        // int n=mat.size();
        // int m=mat[0].size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(i==j){
        //             ps+= mat[i][j];
        //         }
        //         else if(i+j == n-1){
        //             ss+= mat[i][j];
        //         }
        //     }
        // }
        // return ps+ss;

        //or
        int sum=0;
        int n= mat.size();
        for(int i=0, j=0;i<n;i++,j++){
            sum+= mat[i][j]+ mat[i][n-1-j];
        }
        if(n%2 ==1){
            sum-= mat[n/2][n/2];
        }
        return sum;

    }
};