#include <iostream>
#include<cstring>
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
    Product(){
        cout<<"Inside the Constructor"<<endl;
    }

    Product(int id, char *name, int mrp, int sp){
        this->id= id;
        this->mrp= mrp;
        this->selling_price= sp;
        strcpy(name, name);
    }
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
    // Product Camera;

    // Camera.mrp= 100;
    // Camera.selling_price= 200;

    //Camera.setMRP(100);
    //Camera.setSellingPrice(90);

    Product Camera(101, "Sony Pro", 100, 190);  //in this way constructors can be used for initialisation

    cout << "MRP " << Camera.getMRP() << endl;
    cout << "Selling Price " << Camera.getSellingPrice() << endl;

    return 0;
}