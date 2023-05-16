#include <iostream>
using namespace std;
int main()
{
 int a=10;
 int *p;
 p= &a;
 cout<<"a="<<a<<endl;
 cout<<"Using pointer address="<<p<<endl;
 cout<<"Using variable address="<<&a<<endl;
 cout<<"Using pointer value="<<*p<<endl;
return 0;
}