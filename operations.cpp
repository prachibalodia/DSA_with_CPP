#include <iostream>
using namespace std;

int getIthBit(int n, int i){
    int mask= 1<<i;
    return (n & mask) > 0? 1:0;
}

void setIthBit(int &n, int i)  //set ith bit to 1
{
int mask= 1<<i;
n= n|mask;
}

void clearIthBit(int &n, int i){
    int mask = ~(1<<i);
    n= n & mask;
}

void updateIthBit(int &n, int i, int val){
    clearIthBit(n,i);

    int mask= val<<i;
    n= n | mask;
}

void clearLastiBits( int &n, int i){
    int mask= ~0 << i;
    n= n & mask;
}
int main()
{
 int n=10; //1010
 int i;
 cin>>i;
// cout<<getIthBit(n,i)<<endl;

// setIthBit(n,i);
// cout<<"After set ith bit "<<n<<endl;

// clearIthBit(n,i);
// cout<<"After clear ith bit "<<n<<endl;

// updateIthBit(n,i,1);
// cout<<"After update ith bit "<<n<<endl;
int k= 1011;
clearLastiBits(k,i);
cout<<"After clearing last i bits "<<k<<endl;
return 0;
}