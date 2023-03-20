class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0 && (i==0 || flowerbed[i-1] == 0) && (i== flowerbed.size()-1 || flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                n--;
                if(n==0){
                    return true;
                }
            }
        }
        return false;

        // map<int, int>mp;
        // for(int i=0;i<flowerbed.size();i++){
        //     mp[flowerbed[i]]++;
        // }
        // int c0=0, c1=n;
        // for(auto i: mp){
        //     if(i.first == 1){
        //         c1+= i.second;
        //     }
        //      if(i.first == 0){
        //         c0= i.second;
        //     }
        // }
        // if(c1== c0){
        //     return true;
        // }
        // return false;
    }
};