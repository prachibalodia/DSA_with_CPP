class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coords) {
        // int n= coords.size();
        // double x=coords[1][0]-coords[0][0];
        // double y=coords[1][1]-coords[0][1];
        // double slope= INT_MAX; //to handle the edge case
        // if(x){
        //     slope= y/x;
        // }
        // int i=1;
        // while(i<n){
        //     double temp= INT_MAX;
        //     x= coords[i][0]-coords[i-1][0];
        //     y= coords[i][1]-coords[i-1][1];
        //     if(x){
        //         temp= y/x;
        //     }
        //     if(temp != slope){
        //         break;
        //     }
        //     i++;
        // }
        // if(i!=n){
        //     return false;
        // }
        // return true;

        //or
        int n= coords.size();
        double x= coords[1][0]-coords[0][0];
        double y= coords[1][1]-coords[0][1];
        double x1,y1;
        for(int i=2;i<n;i++){
            x1= coords[i][0]-coords[i-1][0];
            y1= coords[i][1]-coords[i-1][1];

            if(x1*y != x*y1){
                return false;
            }
        }
        return true;
    }      
};