#include <iostream>
using namespace std;

//Products of Shopping Cart
class Product{

    private:
    int id;
    char name[100];

    public:
    int mrp;
    int selling_price;

};
int main()
{
    Product Camera;

    Camera.mrp= 100;
    Camera.selling_price= 200;
    
    cout<< "MRP "<< Camera.mrp<< endl;
    cout<< "Selling Price "<< Camera.selling_price<< endl;


 
return 0;
}