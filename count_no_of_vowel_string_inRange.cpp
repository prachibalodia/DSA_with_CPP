class Solution {
public:

    int isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch== 'i' || ch == 'o' || ch == 'u');
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int c=0;

        for(int i=left;i<=right;i++){
            int n= words[i].length();
            
            // if((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') && (words[i][n-1] == 'a' || words[i][n-1] == 'e' || words[i][n-1] == 'i' || words[i][n-1] == 'o' || words[i][n-1] == 'u')){
            //     c++;
            // }

            if(isVowel(words[i][0]) && isVowel(words[i].back()))
            c++;
        
        }
         return c;
    }
};