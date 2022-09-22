class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        // map<int,int> m;
        // vector<int> r;

        // for(int i=0;i<n;i++){
        //     m[arr[i]]++;
        // }
        // for(auto i: m){
        //     if(i.second > 1)
        //     {
        //          r.push_back(i.first);
        //     }
        // }
        // sort(r.begin(), r.end());
        // if(r.empty()){
        //     r.push_back(-1);
        // }
        // return r;
        vector<int> r;
        int max= *max_element(arr, arr+n)+1;
        int ar[max]= {0};
        for(int i=0;i<n;i++){
            ar[arr[i]]++;
        }
        for(int i=0;i<max;i++){
            if(ar[i]>1){
                r.push_back(i);
            }
        }
        if(r.empty())
        {
            r.push_back(-1);
        }
       return r;
       
    }
};