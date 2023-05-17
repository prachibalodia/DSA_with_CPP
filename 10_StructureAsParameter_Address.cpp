#include <iostream>
using namespace std;
struct example
{
    int a;
    int b;
};

void fun(example *e1) // pass by address
{
    e1->a = 20;
    cout << "In fun " << e1->a << " " << e1->b << endl;
}
int main()
{
    example e = {2, 4};
    fun(&e);
    cout << e.a << " " << e.b << endl; // change is reflected

    return 0;
}