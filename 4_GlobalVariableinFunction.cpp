#include <iostream>
using namespace std;
int x=0; //global variable
int fun(int n){
    if(n>0){
        return fun(n-1)+x++; //0+1+2+3+4
    }
    return 0;
}
int main()
{
 int n=5,a;
 a=fun(n);
 cout<<a;
return 0;
}
