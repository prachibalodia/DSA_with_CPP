class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        map<int, int> m;
        for(auto x: arr){
            m[x]++;
        }
        for(int i=0;i<N;i++){
            if(m[i+1]){     //m[i+1] since it says natural numbers only, so 0 wont be considered
                arr[i]= m[i+1];
            }
            else{
                arr[i]= 0;
            }
        }
    }
};