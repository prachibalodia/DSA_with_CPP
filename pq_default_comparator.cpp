#include <iostream>
#include<queue>
using namespace std;

class compare{
    public:
    bool operator()(int a, int b){
        return a>b;  //a<b for descending or max heap ////// a>b for ascending or min heap
    }
};
int main()
{

    int arr[]= {30,60,20,40,80,90,10,100};
    int n= sizeof(arr)/sizeof(int);
    
    priority_queue<int, vector<int>, compare> q;
    for(auto x: arr){
        q.push(x);
    }

    while(!q.empty()){
        cout<<q.top()<<endl;  
        q.pop();
    }
 
return 0;
}