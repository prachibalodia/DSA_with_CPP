class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for(auto a: image){
            for(int i=0;i< image.size(); i++){

                if(a[i] == 0){
                    a[i] = 1;
                }

                else{
                    a[i] = 0;
                }
            }
            reverse(a.begin(), a.end());
            ans.push_back(a);
        }
        return ans;




        //first implementation

        // vector<vector<int>> ans;
        // int n= image.size();
        // int m= image[0].size();
        // for(int i=0;i< n;i++){
        //     for(int j=0;j< m-1/2;j++){
        //         swap(image[i][j] , image[i][m-1-i]);

        //     }
        // }

        // for(int i=0;i< n;i++){
        //     for(int j=0;j< m;j++){
        //        if(image[i][j] == 0){
        //            image[i][j] = 1;
        //        }
        //        else{
        //            image[i][j] = 0;
        //        }

        //     }
        // }

        //  for(int i=0;i< n;i++){
        //     for(int j=0;j< m;j++){
        //         ans[i][j] = image[i][j];

        //     }
        // }
        // return ans;
    }
};