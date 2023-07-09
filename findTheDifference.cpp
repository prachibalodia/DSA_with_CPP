class Solution {
public:
    char findTheDifference(string s, string t) {
        //brute force-> T= O(N), S= O(N+1)
        //using hashmap
    //     unordered_map<int,int>m;
    //     for(auto i: t)
    //     m[i]++;

    //     for(auto i: s)
    //     m[i]--;

    //     for(auto i:m){
    //         if(i.second)return i.first;
    //     }
    //    return t[0];

       //better-> T= O(N), S= O(1)
       //using bit manipulation
    //    char c= '\0';
    //    for(auto i:t)
    //    c^=i;

    //    for(auto i:s)
    //    c^=i;

    //    return c;

        //optimal-> T= O(N), S=O(1)
        //bit manipulation in single iteration
        int n= s.size();
        char c=0;
        for(int i=0;i<n;i++){
            c^=s[i];
            c^=t[i];
        }
        c^= t[n];
        return c;
    }
};