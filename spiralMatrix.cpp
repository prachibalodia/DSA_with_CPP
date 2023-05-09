class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row= matrix.size();
        int col= matrix[0].size();
         vector<int>v;
        if(matrix.empty() || matrix[0].empty()){
            return v;
        }
       int top=0, bottom= row-1, left=0, right= col-1;
        while(top<=bottom && left<=right){
        
        for(int i=left;i<=right;i++){
            v.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            v.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            v.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            v.push_back(matrix[i][left]);
        }
        left++;
        }
    }
    return v;
    }
};