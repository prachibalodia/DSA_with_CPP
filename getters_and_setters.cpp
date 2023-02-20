#include <iostream>
using namespace std;

// Products of Shopping Cart
class Product
{

private:
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    // Setters
    void setMRP(int price)
    {
        if (price > 0)
        {
            mrp = price;
        }
        else{
            mrp = 100;
        }
    }

    void setSellingPrice(int price)
    {
        if (price > mrp)
        {
            selling_price = mrp;
        }
        else
        {
            selling_price = price;
        }
    }

    // Getters
    int getMRP()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return selling_price;
    }
};
int main()
{
    Product Camera;

    // Camera.mrp= 100;
    // Camera.selling_price= 200;

    Camera.setMRP(100);
    Camera.setSellingPrice(90);

    cout << "MRP " << Camera.getMRP() << endl;
    cout << "Selling Price " << Camera.getSellingPrice() << endl;

    return 0;
}