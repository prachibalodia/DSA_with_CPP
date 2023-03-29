// //in java
// class Solution {
//     public int lengthOfLastWord(String s) {

//         String str[]= s.split(" ");
//         return str[str.length-1].length();  //we put brackets after length function for 
//         //calculating the string length. 
//         //In case of array length, braces are not required.
        
//     }
// }

//cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        stack<int> n;
        for(int i=0;i<s.size();i++){
            n.push(s[i]);
        }

        while(n.top() == ' '){
            n.pop();
        }
        int c=0;
        while(!n.empty() && n.top() != ' '){
            c++;
            n.pop();
        }
        return c;
    }
};