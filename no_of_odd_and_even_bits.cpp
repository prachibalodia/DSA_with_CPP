class Solution {
public:
    vector<int> evenOddBit(int n) {

        int i=0; //for index
        int even=0, odd=0;

        while(n>0){
            if(n%2){
                if(i%2 == 0) even++;
                else odd++;
            }
            n=n/2;
            i++;
        }

        vector<int> v;
        v.push_back(even);
        v.push_back(odd);
        return v;

        
    }
};