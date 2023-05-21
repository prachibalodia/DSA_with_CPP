#include <iostream>
using namespace std;
int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
 int n=5;
 cout<<fun(n)<<endl;
 cout<<fun(n); // the second time the value of x starts from 5 and then goes till 10
return 0;
}
