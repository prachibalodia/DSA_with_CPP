#include <iostream>
using namespace std;
int main()
{
    int w=0;
 char s[]= "How are you, I'm prachi..  what  about you!";
 for(int i=0;s[i] != '\0';i++){
    if(s[i] == ' ' && s[i-1]!= ' '){
        w++;
    }
 }
 cout<<"Word number= "<<w+1;
return 0;
}