#include <iostream>
using namespace std;
struct example{
    int a;
    int b;
};
int main()
{
example *p;
// p= (struct example*)malloc(sizeof(struct example));
// p= (example*)malloc(sizeof(example)); //valid only in cpp
p= new example; //valid only in cpp
p->a= 10;
p->b=20;
cout<<p->a<<endl;
cout<<(*p).b<<endl;
return 0;
}