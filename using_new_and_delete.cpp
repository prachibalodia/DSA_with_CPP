#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
 int* arr= new int [n];
 cout<<arr<<endl;
 
 for(int i=0;i<n;i++){
    arr[i]= i;
    cout<<arr[i]<<" ";
 }
 cout<<endl;
  delete [] arr;

  cout<<"Address after deleting the arr fro heap"<<arr<<endl;

return 0;
}