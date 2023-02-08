class Solution
{
public:
    vector<string> findWords(vector<string> &w)
    {
        int i, j, c1=0, c2=0, c3=0;
        for(int i=0; i<w.size();i++){
            string s= w[i];
            c1=0, c2=0, c3=0;

            for(int j=0;j< s.length();j++){
                if(s[j] == 'A' || s[j] == 'a' || s[j] == 'S' || s[j] == 's' || s[j] == 'D' || s[j] == 'd' || s[j] == 'F' || s[j] == 'f' || s[j] == 'G' || s[j] == 'g' || s[j] == 'H' || s[j] == 'h' || s[j] == 'J' || s[j] == 'j' || s[j] == 'K' || s[j] == 'k' || s[j] == 'L' || s[j] == 'l'){
                    c2++;
                }
                else if(s[j] == 'Z' || s[j] == 'z' || s[j] == 'X' || s[j] == 'x' || s[j] == 'C' || s[j] == 'c' || s[j] == 'V' || s[j] == 'v' || s[j] == 'B' || s[j] == 'b' || s[j] == 'N' || s[j] == 'n' || s[j] == 'M' || s[j] == 'm'){
                    c3++;
                }
                else{
                    c1++;
                }
            }
            if(w[i].length() != c1 && w[i].length() != c2 && w[i].length() != c3){
                w.erase(w.begin()+j);
                j--;
            }
        }
        return w;
    }
};