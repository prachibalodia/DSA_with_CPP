#include <iostream>
using namespace std;
int main()
{
 int a[5]= {1,2,3,4,5};
 int *p;
 p=a;
 cout<<"Values using array"<<endl;
 for(int i=0;i<5;i++){
    cout<<a[i]<<endl;
 }
 cout<<"Values using pointer"<<endl;
 for(int i=0;i<5;i++){
    cout<<p[i]<<endl;
 }
return 0;
}