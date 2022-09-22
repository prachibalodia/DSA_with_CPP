class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        int m= a[n-1];
        v.push_back(m);
        for(int i= n-2;i>=0;i--){
            
            m= max(m, a[i]);
            if(a[i] >= m){
                v.push_back(m);
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};