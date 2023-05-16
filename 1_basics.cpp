#include <iostream>
using namespace std;
int add(int a, int b){
    int c= a+b;
    return c;
}
int main()
{
 int a=10, b=20, c;
 c= add(a,b);
 cout<<c<<endl;
return 0;
}