#include <iostream>
using namespace std;
int tillingProblem(int n, int m){
    if(n < m){
        return 1;
    }

    int x= tillingProblem(n-1, m) + tillingProblem(n-m, m);
    return x;
}
int main()
{
 int m, n;
 cin>>n>>m;
 cout<< tillingProblem(n,m)<<endl;
return 0;
}