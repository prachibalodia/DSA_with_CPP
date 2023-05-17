#include <iostream>
using namespace std;
void fun(int *a, int n){ //int a[] can also be used
    for(int i=0;i<n;i++){ 
        //for each loop cant be used as the pointer doesnt have the elements
        cout<<a[i]<<endl;
    }
    a[0]= 22;
}
int main()
{
    int a[]= {2,4,6,8,10};
    int n=5;
    fun(a,n);
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl<<a[0];
return 0;
}