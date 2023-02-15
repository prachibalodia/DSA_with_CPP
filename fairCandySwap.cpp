class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> v;
        int s1=0, s2=0;
        map<int, int> m;

        for(int i: aliceSizes){
            s1+= i;
        }

         for(int i: bobSizes){
            s2+= i;
            m[i]++;
        }

        for(int i: aliceSizes){
            int t= (s1-s2)/2;
            if(m.count(i-t)){
                v.push_back(i);
                v.push_back(i-t);
                return v;
                break;
            }
        }
        return v;

    }
};