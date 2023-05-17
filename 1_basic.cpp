#include <iostream>
using namespace std;
class Rect{
    private:
    int length;
    int breadth;
    public:
    Rect(){
        length= breadth=1;
    }

    Rect(int l, int b);

    int area();

    int perimeter();

    int getLength() {  //get is an accessor function
        return length;
    }

    void setLength(int l){ //set is a mutator function
        length= l;
    }

    ~Rect(){
        cout<<"Destructor"<<endl;
    }
};

//using scope resolution
Rect:: Rect(int l, int b){
    length=l;
    breadth=b;
}
int Rect:: area(){
    return length*breadth;
}
int Rect:: perimeter(){
    return 2*(length+breadth);
}

int main()
{
 Rect r(10,5);
 cout<<"Area "<<r.area()<<endl;
 cout<<"Perimeter "<<r.perimeter()<<endl;
return 0;
}