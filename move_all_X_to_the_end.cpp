#include <iostream>
using namespace std;
string moveX(string s){

    if(s.length()==0){
        return "";
    }
    char ch= s[0];
    string restA= moveX(s.substr(1));
    if(ch=='x'){
        return restA+ch;
    }
    return ch+restA;


}
int main()
{
 cout<<moveX("xxxpxraxcxxhxxxixx");
return 0;
}