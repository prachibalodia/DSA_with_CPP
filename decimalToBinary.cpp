#include <iostream>
using namespace std;

int convertToBinary(int n){
    int p=1, ans= 0;
    while(n>0){
        int last_bit= n & 1;
        ans+= p*last_bit;
        p= p*10;
        n= n>>1;
    }
    return ans;
}
int main()
{
 int n=5;
 cout<<convertToBinary(n)<<endl;
return 0;
}