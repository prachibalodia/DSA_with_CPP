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

struct Array* Union(struct Array *a, struct Array *b){
    int i=0, j=0,k=0;
    int m= a->length;
    int n= b->length;
    struct Array *c= (struct Array*)malloc(sizeof(struct Array));

    while(i<m && j<n){
        if(a->A[i] < b->A[j])
        c->A[k++]= a->A[i++];

        else if(b->A[j] < a->A[i])
        c->A[k++]= b->A[j++];

        else{
            c->A[k++]= a->A[i++];
            j++;
        }
    }
    for(;i<m;i++){
        c->A[k++]= a->A[i];
    }
    for(;j<n;j++){
        c->A[k++]= b->A[j];
    }
    c->length= k;
    c->size= 11;
    return c;
}

struct Array* Intersection(struct Array *a, struct Array *b){
    int i=0, j=0,k=0;
    int m= a->length;
    int n= b->length;
    struct Array *c= (struct Array*)malloc(sizeof(struct Array));

    while(i<m && j<n){
        if(a->A[i] < b->A[j])
        i++;

        else if(b->A[j] < a->A[i])
        j++;

        else{
            c->A[k++]= a->A[i++];
            j++;
        }
    }
    
    c->length= k;
    c->size= 11;
    return c;
}

struct Array* Difference(struct Array *a, struct Array *b){
    int i=0, j=0,k=0;
    int m= a->length;
    int n= b->length;
    struct Array *c= (struct Array*)malloc(sizeof(struct Array));

    while(i<m && j<n){
        if(a->A[i] < b->A[j])
        c->A[k++]= a->A[i++];

        else if(b->A[j] < a->A[i])
        j++;

        else{
            i++;
            j++;
        }
    }
    for(;i<m;i++){
        c->A[k++]= a->A[i];
    }
    
    c->length= k;
    c->size= 11;
    return c;
}

int main()
{
 struct Array a= {{2,4,5,6,8,10},10,6};
 display(a);

 struct Array b= {{1,3,5,7,9,10,11},10,7};
 display(b);
 
 struct Array *c;
 c=Union(&a,&b);
 display(*c);

 struct Array *d;
 d= Intersection(&a, &b);
 display(*d);

 struct Array *e;
 e= Difference(&a, &b);
 display(*e);
return 0;
}