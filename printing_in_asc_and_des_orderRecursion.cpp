#include <iostream>
using namespace std;

void Inc(int n){
    if(n==0){
        // cout<<"1"<<endl;
        return;
    }
    Inc(n-1);
    cout<<n<<endl;

}

void Dec(int n){
    if(n==0){
        // cout<<"1"<<endl;
        return;
    }
    
    cout<<n<<endl;
    Dec(n-1);
    

}
int main()
{
 int n;
 cin>>n;
 cout<<"Increasing order"<<endl;
 Inc(n);
 cout<<"Decreasing order"<<endl;
 Dec(n);
return 0;
}