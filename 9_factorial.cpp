#include <iostream>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }
    return n*fac(n-1);
}
int iFact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main()
{
 cout<<fac(5)<<endl; 
 //if given negative number, it'll make infinite calls and finally terminate due to stack overflow
 cout<<iFact(5);
return 0;
}