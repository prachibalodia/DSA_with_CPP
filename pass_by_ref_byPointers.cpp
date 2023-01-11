#include <iostream>
using namespace std;

void addTaxes(int *ptr){
    *ptr= *ptr- *ptr *0.1;
}
int main()
{
 int income= 100;
 addTaxes(&income);
 cout<<income<<endl;
return 0;
}