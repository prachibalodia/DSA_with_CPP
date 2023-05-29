#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};

void append(struct Array *arr, int x)
{ //->O(1)
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void insert(struct Array *arr, int index, int x)
{ //->O(n)
    // checking if the index is valid or not
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void display(struct Array arr)
{ //->O(1)
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int binarySearchI(int s, int e, int key, struct Array arr){
    while(s<=e){
        int mid= (s+e)/2;
        if(arr.A[mid]==key) return mid;
        else if(arr.A[mid]<key){
            s= mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int binarySearchR(int s, int e, int key, struct Array arr){
    if(s<=e){
        int mid= (s+e)/2;
        if(arr.A[mid]==key) return mid;
        else if(arr.A[mid]<key){
            return binarySearchR(mid+1,e,key,arr);
        }
        else{
            return binarySearchR(s,mid-1,key,arr);
        }
    }
    return -1;
}
int main()
{
    struct Array a = {{2, 4, 6, 8, 10}, 10, 5};
    display(a);
    int s=0, e=a.length-1;
    cout<<binarySearchI(s,e,8,a)<<endl;
    cout<<binarySearchI(s,e,2,a)<<endl;
    cout<<binarySearchR(s,e,8,a)<<endl;
    cout<<binarySearchR(s,e,2,a)<<endl;
    cout<<binarySearchR(s,e,9,a)<<endl;
    return 0;
}