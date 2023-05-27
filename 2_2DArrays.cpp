#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type 1
    int A1[][2]= {{1,2}, {2,3},{3,4}};

    //type 2
    int *A2[3];
    A2[0]= new int[2];
    A2[1]= new int[2];
    A2[2]= new int[2];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            A2[i][j]= k++;
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<A2[i][j]<<" ";
        }
    }
    cout<<endl;
    //type 3
    int **A3;
    A3= new int*[2];
    A3[0]= new int[3];
    A3[1]= new int[3];
    A3[2]= new int[3];
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            A3[i][j]= k++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<A3[i][j]<<" ";
        }
    }
return 0;
}