#include <iostream>
#include<stack>
using namespace std;
int main()
{
 stack<int>s;
 s.push(4);
 s.push(5);
 s.push(6);
 s.push(7);
 s.push(8);
 s.push(9);
 while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
 }
return 0;
}