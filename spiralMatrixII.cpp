class Solution {
public:
    vector<vector<int>> generateMatrix(int num) {
        vector<vector<int>> v(num, vector<int>(num));
        int left=0, right= num-1, top=0, bottom= num-1;
        int n=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<= right;i++){
                v[top][i]= n;
                n++;
            }
            top++;

            for(int i=top;i<=bottom;i++){
                v[i][right]= n;
                n++;
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    v[bottom][i]=n;
                    n++;
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    v[i][left]=n;
                    n++;
                }
                left++;
            }
        }
        return v;
    }
};