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

int linearSearchT(struct Array *arr, int key){
    for(int i=0;i<arr->length;i++){
        if(key == arr->A[i]){
            swap(arr->A[i], arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}
int main()
{
    struct Array a = {{2, 4, 6, 8, 10}, 10, 5};
    display(a);
    cout<<linearSearchT(&a, 88)<<endl;
    cout<<linearSearchT(&a, 8)<<endl;
    display(a);
    return 0;
}