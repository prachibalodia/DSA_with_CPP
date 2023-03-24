#include <iostream>
#include<queue>
using namespace std;
int main()
{

    int arr[]= {30,60,20,40,80,90,10,100};
    int n= sizeof(arr)/sizeof(int);
    
    priority_queue<int> q;  //by default sorts in the descending order
    for(auto x: arr){
        q.push(x);
    }

    while(!q.empty()){
        cout<<q.top()<<endl;  
        q.pop();
    }
 
return 0;
}