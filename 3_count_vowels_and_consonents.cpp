#include <iostream>
using namespace std;
int main()
{
 char s[]="How are you, I'm prachi";
 int v=0,c=0;
 for(int i=0;s[i] != '\0';i++){
    if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
        v++;
    }
    else if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122) c++;
 }
 cout<<"Vowels= "<<v<<endl;
 cout<<"Consonant= "<<c<<endl;
return 0;
}