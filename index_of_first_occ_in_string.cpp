class Solution {
public:
    int strStr(string haystack, string needle) {
    //    if(haystack.length()>0){
    //        return haystack.find(needle);
    //    }
    //    return -1;

       //sliding window approach
       int nl= needle.length();
       int hl= haystack.length();
       int nIndex=0;

       for(int i=0;i<hl;i++){
           //checking if chars matches
           if(haystack[i] == needle[nIndex]){
               nIndex++;
           }
           else{
               //moving the sliding window by one index
               //the index just next to the previous one
               i= i-nIndex;

               //needle index changes to 0
               nIndex=0;
           }

            //checking if the gained length is equal to needle length
           if(nl == nIndex){
               return i-nIndex+1;
           }
       }
       return -1;
       
    }
};