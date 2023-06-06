#include <iostream>
using namespace std;
bool validateString(char s[]){
    for(int i=0;s[i] !='\0';i++){
        if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=47 && s[i]<=58)){
            return 0;
        }
    }
    return 1;
}
int main()
{
 char s1[]="prachi123";
 char s2[]="prachi?123@";
 cout<<validateString(s1)<<endl;
 cout<<validateString(s2)<<endl;
return 0;
}