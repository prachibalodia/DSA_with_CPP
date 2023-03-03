#include <iostream>
#include<stack>
#include<string>
using namespace std;

void insertAtBottom(stack<int> &s, int data){

    //base case
    if(s.empty()){
        s.push(data);
        return;
    }

    int temp= s.top();
    s.pop();
    //rec case
    insertAtBottom(s, data);
    s.push(temp);
}
int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    int data= 10;
    insertAtBottom(s, data);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
 
return 0;
}