#include <iostream>
using namespace std;
int main()
{
 string s;
 cin>>s;
 for(int i=0; s[i]!='\0';i++){
    if(s[i]>=65 && s[i]<=90){
        s[i]+= 32;
    }
    else if(s[i] >=97 && s[i]<=122){
        s[i]-=32;
    }
    else{
        s[i]=s[i];
    }
 }
 cout<<"Changed string case "<<s<<endl;
return 0;
}