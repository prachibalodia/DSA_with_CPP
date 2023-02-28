class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n= arr.size();
        vector<int> a= arr;
        if(arr.size() ==1) return {1};
        if(arr.size() == 0) return arr;
        map<int,int> m;
        sort(a.begin(), a.end());
        int r=1;
        m[a[0]] = 1;
        for(int i=1;i<a.size();i++){
            if(m[a[i]] != m[a[i-1]]){
                m[a[i]] = ++r;
            }
            else{
                m[a[i]]= r;
            }
        }

        for(int i=0;i<arr.size();i++){
            arr[i]= m[arr[i]];
        }
        return arr;
        

        
        
        
    }
};