#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n & (n-1)) == 0){
        cout<< "Yes, a power of two";
    }
    else{
        cout<<" No";
    }
 
return 0;
}