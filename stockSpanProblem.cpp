#include <iostream>
#include<stack>
using namespace std;

void stockSpan(int prices[], int n, int span[]){

    stack<int> s;

    s.push(0);
    span[0] = 1;

    for(int i=1;i<n;i++){

        int currPrice= prices[i];

        while(!s.empty() && prices[s.top()] <= currPrice){
            s.pop();
        }

        if(!s.empty()){
            int prevHighest= s.top();
            span[i]= i- prevHighest;
        }

        else{
            span[i] = i+1;
        }
        //pushing the element at i into the stack
        s.push(i);
    }

}
int main()
{
    int prices[]= {100, 80, 60, 70, 60, 75, 85};
    int n= sizeof(prices)/ sizeof(int);
    int span[1000]= {0};

    stockSpan(prices, n, span);
    for(int i=0;i<n;i++){
        cout<< span[i]<< " ";
    }
 
return 0;
}