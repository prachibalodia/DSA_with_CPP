#include <iostream>
#include<cstring>
using namespace std;
int main()
{
 char a[1000]= "chocolate";
 char b[500];
 //String Length Function
 //strlen function is used

 cout<<"Length of String a is "<<strlen(a)<<endl;

 //String Copy Function
 //strcpy function is used
 strcpy(b,a);
 cout<<b<<endl;

//String Compare Function
//strcmp function is used
cout<<strcmp(a,b)<<endl;

//String Concat Fuction
//strcat function

char x[]= "Hi ";
char y[]= "I am Prachi"; 
cout<<strcat(x,y)<<endl;

strcpy(b, strcat(x,y));
cout<<b<<endl;
return 0;
}