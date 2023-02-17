#include <iostream>
using namespace std;

int gridWays(int i, int j, int m, int n){

    //base case
    if(i == m-1 && j == n-1){
        return 1;
    }
    
    //taking care of the corner cases, else segmentation fault
    if(i>=m or j>=n){
        return 0;
    }

    //rec case
    int ways=0;
    ways+= gridWays(i,j+1,m,n) + gridWays(i+1, j, m,n);

    return ways;
}
int main()
{
 int n,m;
 cin>>m>>n;
 cout<<gridWays(0,0,m,n)<<endl;
return 0;
}