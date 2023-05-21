#include <iostream>
int pow1(int n, int p){
    if(p==0){
        return 1;
    }
    return n*pow1(n,p-1);
}
int pow2(int n, int p){
    if(p==0){
        return 1;
    }
   if(p%2 ==0){
    return pow2(n*n, p/2);
   }
   else
   return n*pow2(n*n, (p-1)/2);
}
using namespace std;
int main()
{
 int p1= pow1(9,3);
 cout<<p1<<endl;
int p2= pow2(9,3);
 cout<<p2<<endl;
return 0;
}