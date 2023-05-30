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

void rearrange(struct Array *arr){
    int i=0;
    int j= arr->length-1;
    while(i<j){
        while(arr->A[i]<0) //checks for negative,since start will have negative elements
        i++;

        while(arr->A[j]>=0) //checks for positive, since end will have positive elements
        j--;
        if(i<j){
            swap(arr->A[i], arr->A[j]);
        }
    }
}

int main()
{
 struct Array a= {{-1,2,-2,4,6,8,-7,-5,10,-1},20,10};
 display(a);
 rearrange(&a);
 display(a);
return 0;
}