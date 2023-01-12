#include <iostream>
using namespace std;
int** dynamic2Darray(int rows, int cols){

    //array containg the address of the array of pointers
    int** arr= new int*[rows];

    //array containing the address for each row of the original 2D array
    //array of pointers storing addresses
    //allocating memory for each row
    for(int i=0;i<rows;i++){
        arr[i] = new int[cols];
    }

    //actual 2D array
    //initialising the array
    int value=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}
int main()
{
    int rows, cols;
    cin>>rows>>cols;
 int** arr= dynamic2Darray(rows, cols);
 for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
return 0;
}