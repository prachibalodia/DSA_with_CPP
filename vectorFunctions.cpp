#include <iostream>
#include <vector>
using namespace std;
int main()
{
 vector<int> n;
  for(int a=1;a<11;a++)
 {
    n.push_back(a*2);
 }

  //to print elements of vector from starting to end
 cout<<"Elements of vector beginning to end:"<<endl;
 for(auto i=n.begin(); i != n.end(); i++)
 {
    cout<< *i <<" ";

 }
 cout<<endl;

 //to print elements of vector from end to starting
  cout<<"Elements of vector end to beginning:"<<endl;
 for(auto j = n.rbegin(); j != n.rend(); j++)
 {
    cout<< *j <<" ";
 }

//capacity
cout<<endl;
//to return the size(no. of elements in a vector)
cout<<"Size "<<n.size()<<endl;

//to return the capacity of the vector(the number of values it can hold)
cout<<"Capacity "<<n.capacity()<<endl;

////to return the maximum number of elements that the vector can hold
cout<<"Max size that a vector can have "<<n.max_size()<<endl;

//to return whether a vector is empty
cout<<"to return whether a vector is empty "<<n.empty()<<endl;

//to resize the vector to contain only n number of elements
n.resize(10);
cout<<"capacity after resizing "<<n.capacity()<<endl;

//to get an element at a particular position
cout<<"at 4th index"<<n.at(4)<<endl;

//to get the first element
cout<<n.front()<<endl;

//to get the last element
cout<<n.back()<<" "<<n[9]<<endl;

// modifiers

//to get the element at n-1 index
int x= n.size();
cout<<n[x-1]<<endl;
//assigning a new vector n2, and printing it
vector<int> n2;
n2.assign(6,10);
for(int i=0;i<n2.size();i++)
{
    cout<< n2[i]<<" ";
}
cout<<endl;
//pop_back function

n.pop_back();
for(int i=0;i<n.size();i++)
{
    cout<< n[i]<<" ";
}
cout<<endl;

//to insert at a specific position
n2.insert(n2.begin(),2);
cout<<n2[0]<<endl;

//to erase the first element from n2
n2.erase(n2.begin());
cout<<n2[0]<<endl;

//swap function
n2.swap(n);
for(int i=0;i<n2.size();i++)
{
    cout<< n2[i]<<" ";
}

//to clear a vector
n2.clear();

return 0;
}
