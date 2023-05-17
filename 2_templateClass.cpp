#include <iostream>
using namespace std;
template <class T>
class Arithmetic
{
private:
    T a, b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
}; 

//scope resolution
template <class T>
Arithmetic<T>:: Arithmetic(T a, T b){
    this->a= a;
    this->b= b;
}
template <class T>
T Arithmetic<T>:: add(){
    return a+b;
}
template <class T>
T Arithmetic<T>:: sub(){
    return a-b;
}

int main()
{
    Arithmetic<int> a1(10,5);
    cout<<a1.add()<<endl;
    Arithmetic<float> a2(10.5,5.3);
    cout<<a2.sub()<<endl;
    return 0;
}