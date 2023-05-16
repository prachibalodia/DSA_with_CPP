#include <iostream>
using namespace std;
int main()
{
 int a=10;
 int &r=a; //short name or nickname to a
 cout<<a<<endl;
 cout<<r<<endl;
 a=25;
 cout<<a<<endl;
 cout<<r<<endl;
 r=35;
 cout<<a<<endl;
 cout<<r<<endl;
return 0;
}