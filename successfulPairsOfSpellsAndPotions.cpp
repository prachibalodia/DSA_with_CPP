class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    
    //Optimised- using binary search
    int n= spells.size();
    int m= potions.size();

    vector<int>v;
    
    sort(potions.begin(), potions.end());
    for(int i=0;i<n;i++){
        int s= 0;
        int e= m-1;
        int mid;
        while(s<=e){
        mid= (s+e)/2;
        long long x= (long long)spells[i] * (long long)potions[mid];
        if(x>= success){
            e= mid-1;
        }
        else{
            s=mid+1;
        }
    }
    v.push_back(m-s);
    }
    return v;
   
    //brute force- TLE
    //     vector<int> v;
    //     int sum;
    //     for(int i=0;i<spells.size();i++){
    //         sum=0;
    //         for(int j=0;j<potions.size();j++){
    //          long long x= (long long)spells[i] * (long long)potions[j];
    //             if(x >= success){
    //                 sum++;
    //             }
    //         }
    //         v.push_back(sum);
    //     }
    //  return v;   
    }
};