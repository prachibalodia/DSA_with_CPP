#include <iostream>
using namespace std;
struct example
{
    int a[2];
    int b;
};

void fun(example e1) //pass by value
{
    e1.a[0] = 20;
    e1.a[1] = 10;
    cout << "In fun " << e1.a[0]<<" "<<e1.a[1] << " " << e1.b << endl;
}
int main()
{
    example e = {{1,2}, 4};
    fun(e);
    cout <<"In main "<< e.a[0]<<" "<<e.a[1]<<" "<< e.b << endl; //change not reflected

    return 0;
}