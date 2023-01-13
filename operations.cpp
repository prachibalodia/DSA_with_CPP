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
void clearRangeOfBits(int &n, int i, int j){
    int a= (~0) << (j+1);
    int b= (1<<i) -1;
    int mask= a|b;
    n= n&mask;
}

void replaceBits(int &n, int i, int j, int m){
    clearRangeOfBits(n,i,j);
    int mask= m<<i;
    n= n|mask;
}
int main()
{
 int n=15; //1111
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
// clearLastiBits(k,i);
// cout<<"After clearing last i bits "<<k<<endl;
int j;
cin>>j;
int n1= 31;
// clearRangeOfBits(n1,i,j);
// cout<<"After clearing last i to j bits "<<n<<endl;
int m= 5;
replaceBits(n1,i,j,m);
cout<<"After bits replace "<< n1<<endl;


return 0;
}