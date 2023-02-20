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

    //coding a custom copy constructor
    //**********************************************
    //if this custom copy constructor is present, this will only run, 
    //even though other default copy constructors are present

    Product(Product &x){
        id= x.id;
        strcpy(name, x.name);
        mrp= x.mrp;
        selling_price= x.selling_price;
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

    void showDetails(){
        cout<<"ID "<<id<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"MRP "<<mrp<<endl;
        cout<<"Selling Price "<<selling_price<<endl;
        cout<< "---------------------------------";
        cout<<endl;

    }
};
int main()
{

    Product Camera(10001, "Sony Pro", 100, 190);  
    Product webCam(Camera);  //by default copy constructor
    Product handycam = Camera; //copy constructor
    handycam.setMRP(1000);

    Camera.showDetails();
    webCam.showDetails();
    handycam.showDetails();

    return 0;
}