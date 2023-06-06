#include <iostream>
using namespace std;
int main()
{
 string s;
 cin>>s;
 cout<<s<<endl;
 int i;
 for(i=0;s[i] != '\0';i++){
    i++;
 }
 cout<<"Length is "<<i<<endl;
return 0;
}