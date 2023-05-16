#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
 int *p; //p resides in the stack
 //creating an array of 5 integers in the heap
 //Dynamic memory allocation
 p= new int[5]; //in C++ language
 p[0]=10;
 p[1]=20;
 p[2]=30;
 p[3]=40;
 p[4]=50;
 for(int i=0;i<5;i++){
    cout<<p[i]<<endl;
 }
 //deallocation
 delete [] p; //[] is used in case of arrays
return 0;
}