#include <iostream>
using namespace std;
int main()
{
 int x= 5;
 int *ptr= &x;
 cout<<"&x= "<<&x<<endl;
 cout<<"ptr= "<<ptr<<endl;

//Address of a pointer variable
cout<<"Address of ptr, &ptr= "<< &ptr<<endl;
 //pointer to a pointer
 int **xptr = &ptr;
 cout<<"xptr= "<<xptr<<endl;
return 0;
}