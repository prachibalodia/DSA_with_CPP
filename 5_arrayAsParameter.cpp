#include <iostream>
using namespace std;

void fun(int a[]) //int *a can also be used
{
    //both int *a and int a[] are pointers
    cout << "size in fun "<<sizeof(a) / sizeof(int)<<endl; 
    //this will give 1 as pointers have a fixed size of 4 or 8
}
int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int n = 5;
    cout << "size in main "<< sizeof(a) / sizeof(int)<<endl;;
    fun(a);
    for (int x : a)
    {
        cout << x << endl;
    }
    return 0;
}