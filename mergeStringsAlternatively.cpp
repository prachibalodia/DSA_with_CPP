class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // string s="";
        // int l1= word1.size();
        // int l2= word2.size();
        // int l;
        // if(l1==l2){
        //     l=l1;
        // }
        // else if(l1>l2){
        //     l=l1;
        // }
        // else{
        //     l=l2;
        // }
        // int x=0, y=0;
        // for(int i=0;i<l;i++){
        //     if(x<l1){
        //         s= s+ word1[x++];
        //     }
        //     if(y<l2){
        //         s=s+word2[y++];
        //     }
        // }
        // return s;        

        //or

        string s="";
        int i=0, j=0;
        while(i< word1.size() && j<word2.size()){
            s+= word1[i++];
            s+= word2[j++];
        }

        s+= word1.substr(i);
        s+= word2.substr(j);

        return s;
    }
};