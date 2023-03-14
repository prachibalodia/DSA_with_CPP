class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //here, the left variable is an iterator travesing from left side
        //if no duplicate is found well and good, keep adding in the set

        //if duplicate found, the variable r is pointing to 0 at the start
        //it keeps on deleting from the startinf(left side) until and unless
        //no match is found
        
       unordered_set<char> st;
        int left=0, r=0, maxL=0;
        while(left< s.length()){
            auto it= st.find(s[left]);
            if(it == st.end()){
                int l= left-r+1;
                maxL= max(maxL, l);
                st.insert(s[left]);
                left++;
            }
            else{
                st.erase(s[r]);
                r++;
            }
        }
        return maxL;
    }
};