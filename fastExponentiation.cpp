#include <iostream>
using namespace std;
int fastExponentiation(int a, int n){
    int ans=1;
    while(n>0){
        int last_bit= n &1;
        if(last_bit){
            ans= ans * a;
        }
        a= a*a;
        n= n>>1;
    }
    return ans;
}
int main()
{
 int a=3, n=5;
 cout<<fastExponentiation(a,n)<<endl;
return 0;
}