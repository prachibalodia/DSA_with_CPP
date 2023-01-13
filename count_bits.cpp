#include <iostream>
using namespace std;
int countBits(int n){
    int count=0;

    while(n>0){
        count+= n&1;
        n= n>>1;
    }
    return count;
}
int countBitsHack(int n){
    int count= 0;
    while(n>0){
        n= n & n-1;
        count++;
    }
    return count;
}
int main()
{
 int n;
 cin>>n;
 cout<<countBits(n)<<endl;
 cout<<countBitsHack(n)<<endl;
return 0;
}