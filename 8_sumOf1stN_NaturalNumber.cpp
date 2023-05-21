#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return sum(n-1)+n;
}

int iSum(int n){
    int i;
    int s=0;
    for(i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
int main()
{
 int r,s;
 r= sum(5);
 s= iSum(5);
 cout<<r<<" "<<s;
return 0;
}