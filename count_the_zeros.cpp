class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        map<int, int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int z=0;
        for(auto x: m){
            if(x.first == 0){
                z= x.second;
            }
        }
        return z;
    }
};