#include <iostream>
using namespace std;
#include<vector>
int fibI(int n){ //iterative- O(n)
    int f0=0, f1=1, s;
    for(int i=2;i<=n;i++){
        s= f0+f1;
        f0=f1;
        f1=s;
    }
    return s;
}

int fibR(int n){//recursion- O(2^n)
    if(n<=1) return n;
    return fibR(n-2)+ fibR(n-1);
}

int fibM(int n, vector<int> &F){ //memoisation- O(n)
    if(n<=1){
        F[n]= n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2]= fibM(n-2, F);
        }
        if(F[n-1] == -1){
            F[n-1]= fibM(n-1, F);
        }
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
    }
int main()
{
 vector<int> F(10, -1);
 cout<<fibI(7)<<endl;
 cout<<fibR(7)<<endl;
 cout<<fibM(7, F)<<endl;
return 0;
}