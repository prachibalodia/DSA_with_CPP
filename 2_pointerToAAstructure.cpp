#include <iostream>
using namespace std;
struct example{
    int a;
    int b;
};
int main()
{
//  struct example e; //valid in c and cpp
example e= {10,5}; //valid only in cpp
cout<<"Using dot operator"<<endl;
cout<<e.a<<endl;
cout<<e.b<<endl;
example *p= &e;
cout<<"Using pointers"<<endl;
cout<<p->a<<endl;
cout<<(*p).b<<endl;
return 0;
}