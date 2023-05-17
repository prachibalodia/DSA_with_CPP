#include <iostream>
using namespace std;
struct example{
    int a;
    int b;
};
struct example* fun(){
    example *e1;
    e1= new example;
    //e1= (struct example*)malloc(sizeof(struct example));
    e1->a= 2;
    e1->b=4;
    return e1;
}
int main()
{
 example *e= fun();
 cout<<e->a<<" "<<e->b<<endl;
return 0;
}