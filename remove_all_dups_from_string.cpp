#include <iostream>
using namespace std;
string removeDups(string s){
    if(s.length()==0){
        return "";
    }

    char ch= s[0];
    string restA= removeDups(s.substr(1));
    if(ch == restA[0]){
        return restA;
    }
    return (ch+restA);
}
int main()
{
    cout<<removeDups("aaabbccccddeff")<<endl;
 
return 0;
}