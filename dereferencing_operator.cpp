#include <iostream>
using namespace std;
int main()
{
 int x=5;
 int *ptr= &x;
 cout<< "value, *ptr= "<<*ptr<<endl; //dereferencing 
 cout<<"Address, ptr = "<<ptr<<endl;
return 0;
}