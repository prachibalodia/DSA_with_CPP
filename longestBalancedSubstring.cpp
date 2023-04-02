class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        //approach 1
        // int mx=0,n= s.length();
        // for(int i=0;i<n;i++){
        //     int j=i;
        //     int zeros=0, ones=0;
        //     for(;j<n;j++){
        //         if(s[j] == '0'){
        //             zeros++;
        //         }
        //         if(s[j] == '1'){
        //             break;
        //         }
        //     }
        //     int k=j;
        //     for(;k<n;k++){
        //         if(s[k] == '1'){
        //             ones++;
        //         }
        //         if(s[k] == '0'){
        //             break;
        //         }
        //     if(ones == zeros){
        //         mx= max(mx, (k-i+1));
        //     }
        //     }
        // }
        // return mx;

        //approach 2
        int mx=0;
        for(int i=0;i<s.size();i++){
        bool flag= false;
        int zeros=0, ones=0;
            for(int j=i;j<s.size();j++){
             if(s[j] == '1'){
                flag= true;
            }
            if(s[j] == '0' && !flag){
                zeros++;
            }

            if(s[j] == '1' && flag){
                ones++;
            }
            if(s[j] == '0' && flag){
                break;
            }
            if(zeros == ones){
                mx= max(mx, zeros+ones);
            }
            }
        }
        return mx;
    }
};