#include <iostream>
using namespace std;
void addTax1(int income){ //pass by value
    income= income- income*0.1;
}
void addTax2(int &money){ //pass by reference by ref variable
    money= money- money*0.1;
}
int main()
{
 //pass by value
 int income= 100;
 addTax1(income);
 cout<<income<<endl; //income value remains the same, and does not change

//pass by reference
int income1= 100;
 addTax2(income1);
 cout<<income1<<endl;
return 0;
}