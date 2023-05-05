class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int max_count = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i >= k && vowels.count(s[i-k])) {
                count--;
            }
            if (vowels.count(s[i])) {
                count++;
            }
            max_count = max(max_count, count);
        }
        return max_count;

        //runtime error
        // int j=0;
        // int len, maxL=INT_MIN;
        // while(j<s.length()){
        //     len=0;
        //      for(int i=j;i<k+j;i++){
        //     if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        //         len++;
        //     }
        // }
        // j++;
        // maxL= max(maxL, len);
        // }
        // return maxL;
    }
};