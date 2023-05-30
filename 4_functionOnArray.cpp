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

int get(struct Array arr, int index){
    if(index>=0 && index< arr.length){
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length){
        arr->A[index]= x;
    }
}

int Max(struct Array arr){
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    return max;
}

int Min(struct Array arr){
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;
}

int Sum(struct Array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum+= arr.A[i];
    }
    return sum;
}

int avg(struct Array arr){
    return Sum(arr)/arr.length;
}
int main()
{
 struct Array a= {{2,4,6,8,10},10,5};
 display(a);
 cout<<get(a,2)<<endl;
 Set(&a,0,111);
 display(a);
 cout<<Max(a)<<endl;
 cout<<Min(a)<<endl;
 cout<<Sum(a)<<endl;
 cout<<avg(a)<<endl;
return 0;
}