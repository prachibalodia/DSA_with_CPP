#include <iostream>
using namespace std;
struct r{
    int a;
    int b;
};
int main()
{
 int *p1;
 double* p2;
 char* p3;
 float* p4;
 struct r *p5;
 cout<<sizeof(p1)<<endl;
 cout<<sizeof(p2)<<endl;
 cout<<sizeof(p3)<<endl;
 cout<<sizeof(p4)<<endl;
 cout<<sizeof(p5)<<endl;
return 0;
}