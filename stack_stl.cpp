#include <iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Prachi");
    s.push("Jitika");
    s.push("Lakshya");
    s.push("Kartik");

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
 
return 0;
}