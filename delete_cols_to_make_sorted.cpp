class Solution {
public:
    int minDeletionSize(vector<string>& strs) {

        //approach 1
        // int row= strs.size();
        // int col= strs[0].size();
        // int c=0;

        //tricky part
        //here we take column iteration first, because, we always want to start from the 
        //first col (first col that has become row after change)
        // for(int j=0;j<col;j++){
        //     for(int i=0;i<row-1;i++){
        //         if(strs[i][j] > strs[i+1][j]){
        //             c++;
        //             break;
        //         }
        //     }
        // }
        // return c;


        //approach 2
        int row= strs.size();
        int col= strs[0].size();
        int c=0;

        for(int j=0;j<col;j++){
            string s="";
            for(int i=0;i<row;i++){
                s+= strs[i][j];
            }

            string reverse_s= s;
            sort(s.begin(), s.end());
            if(reverse_s != s){
                c++;
            }
        }

        return c;
        
    }
};