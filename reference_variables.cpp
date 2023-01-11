#include <iostream>
using namespace std;
int main()
{
 int x= 5;
int &y= x;
y++;
cout<<"y= "<<y<<endl;
x++;
cout<<"x= "<<x<<endl;
return 0;
}