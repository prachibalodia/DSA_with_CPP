#include <iostream>
using namespace std;

void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch= s[0];
    string restA= s.substr(1);

    subseq(restA, ans);
    subseq(restA,ans+ch);
}
int main()
{
 subseq("abc", "");
return 0;
}