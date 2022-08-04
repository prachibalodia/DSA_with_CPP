#include <iostream>
#include<algorithm>
using namespace std;

//comparator function, a<b gives ascending order and a>b gives descending order
bool compare(int a, int b)
{
    return a>b;
}
int main()
{
 int arr[]= {-5,-2,3,7,4,9,2,7,-1,110,-11};
 int n= sizeof(arr)/sizeof(int);
 // starting from index 0 to index n-1, i.e less than n
 //sort[0,n)
 cout<<"Type one: Normal Sort"<<endl;
 sort(arr, arr+n);

 for(auto x:arr)
 {
    cout<<x<<" ";
 }
 cout<<endl;

cout<< "Type 2- Reverse Order"<<endl;
int arr2[]= {-5,-5,3,7,4,9,2,7,-1,140};
int n2= sizeof(arr2)/sizeof(int);
//Reverse order of the array
 reverse(arr2, arr2+n2);

 for(auto x:arr2)
 {
    cout<<x<<" ";
 }
 cout<<endl;

cout<< "Type 3- Greater Function"<<endl;
int arr3[]= {-6,-5,3,7,2,9,2,7,-1,150,-41};
int n3= sizeof(arr3)/sizeof(int);
//Reverse order sorted array
 sort(arr3, arr3+n3, greater<int>());

 for(auto x:arr3)
 {
    cout<<x<<" ";
 }
cout<<endl;

cout<< "Type 4- Comparators"<<endl;
int arr4[]= {-6,-5,3,7,6,2,7,-1,90,-51};
int n4= sizeof(arr4)/sizeof(int);

 sort(arr4, arr4+n4, compare);

 for(auto x:arr4)
 {
    cout<<x<<" ";
 }


return 0;
}