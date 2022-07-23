//inverted half pyramid
//5 4 3 2 1 
//5 4 3 2
//5 4 3
//5 4
//5
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++)5
    {
        for(int j=5;j>=i;j--)
        {
             cout<<"*";
        }
        cout<<endl;
    }
}
