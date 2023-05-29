class ParkingSystem {
public:
// vector<int> v;

//or
int b,m,s;
    ParkingSystem(int big, int medium, int small) {
        // v.push_back(big);
        // v.push_back(medium);
        // v.push_back(small);

        //or

        b=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int carType) {
        // if(carType == 1){
        //     if(v[0]!=0){
        //         v[0]--;
        //         return true;
        //     }
        // }
        //  if(carType == 2){
        //     if(v[1]!=0){
        //         v[1]--;
        //         return true;
        //     }
        // }
        //  if(carType == 3){
        //     if(v[2]!=0){
        //         v[2]--;
        //         return true;
        //     }
        // }
        // return false;

        //or

        if(carType == 1 && b==0 || carType==2 && m==0 || carType==3 && s==0){
            return false;
        }
        if(carType == 1) b--;
        if(carType == 2) m--;
        if(carType == 3) s--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */