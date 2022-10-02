#include <iostream>
using namespace std;
string keypadArr[]= {"","","abc","def","ghi"};
void keyPad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch= s[0];
    string code= keypadArr[ch-'0'];
    string restA= s.substr(1);

    for(int i=0;i<code.length();i++){
        keyPad(restA, ans+code[i]);
    }
    


}
int main()
{
    keyPad("23","");
 
return 0;
}