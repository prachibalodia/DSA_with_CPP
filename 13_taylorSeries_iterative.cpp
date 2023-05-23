#include <iostream>
using namespace std;
double e1(int x, int n){
    double s=1;
    for(;n>0;n--){
        s= 1+ s*x/n;
    }
    return s;
}

//or
double e2(int x, int n){
    double s=1;
    double num=1, den= 1;
    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+= num/den;
    }
    return s;
}
int main()
{
 cout<<e1(1,10)<<endl;
 cout<<e2(1,10)<<endl;

return 0;
}