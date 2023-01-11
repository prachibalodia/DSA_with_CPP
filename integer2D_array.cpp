#include <iostream>
using namespace std;
void print(int arr[][100], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }
}
int main()
{

// integer 2D array
 int num[100][100];
 int n,m;
 cin>>m>>n;

 //taking input for the array
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>> num[i][j];
    }
    print(num,m,n); //passing by reference where only the address of array is sent to the function and not it's copy

 }
return 0;
}