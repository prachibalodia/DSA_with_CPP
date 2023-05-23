#include <iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
//combination or selection function
int C(int n, int r){ //nCr= n!/ r!*(n-r)!
    int t0, t1,t2;
    t0= fact(n);
    t1= fact(r);
    t2= fact(n-r);
    // int num= t0;
    // int den= t1*t2;
    // return num/den;
    //or
    return t0/(t1*t2);
}

int CRec(int n, int r){ //follows pascals triangle rule
//nCr= (n-1)C(r-1)+(n-1)Cr
if(n==r || r==0) return 1;
return CRec(n-1, r-1)+ CRec(n-1, r);

}
int main()
{
 cout<<C(4,2)<<endl;
 cout<<CRec(4,2)<<endl;
return 0;
}