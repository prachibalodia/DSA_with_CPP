#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

void append(struct Array *arr, int x){  //->O(1)
    if(arr->length < arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(struct Array *arr, int index, int x){ //->O(n)
    //checking if the index is valid or not
    if(index>=0 && index<= arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]= arr->A[i-1];
        }
        arr->A[index]= x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index){
    int x=0;
    if(index>=0 && index< arr->length){
        x= arr->A[index];
    for(int i=index;i<arr->length-1;i++){
        arr->A[i]= arr->A[i+1];
    }
    arr->length--;
    return x;
    }
    return 0;
}

void display(struct Array arr){  //->O(1)
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

//Reversing by using an Auxillary Array
void reverse1(struct Array *arr){ 
    struct Array a;
    for(int i=0,j=arr->length-1;i<arr->length;i++,j--){
        a.A[j]= arr->A[i];
    }

    for(int i=0;i<arr->length;i++){
        arr->A[i]= a.A[i];
    }
}

//Reversing without any auxillary array
void reverse2(struct Array *arr){
    int n= arr->length;
    for(int i=0;i<n/2;i++){
        swap(arr->A[i],arr->A[n-1-i]);
    }
}

int main()
{
 struct Array a= {{2,4,6,8,10},10,5};
 display(a);
 cout<<"Reverse1 function"<<endl;
 reverse1(&a);
 display(a);
 cout<<"Reverse2 function"<<endl;
 reverse2(&a);
 display(a);
return 0;
}