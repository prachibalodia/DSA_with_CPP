#include <iostream>
#include<stdio.h>
using namespace std;

struct rect{
    int l;
    int b;
    char x;
};
int main()
{
 struct rect r;
 r.l= 10;
 r.b= 5;
 r.x='A';
 printf("Size of the struct= %d\n", sizeof(r));
 printf("Length= %d\n", r.l);
 printf("Bredth= %d\n", r.b);
return 0;
}