#include <iostream>
using namespace std;
void swap(int &a, int &b){ //only in cpp
    int temp;
    temp=a;
    a=b;
    b= temp;
}
int main()
{
 int a=10, b=20;
 swap(a,b);
 cout<<a<<" "<<b<<endl; //values get swapped
return 0;
}