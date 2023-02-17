#include <iostream>
using namespace std;

void printBoard(int board[][20], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool canPlace(int board[][20], int n, int x, int y){
    //column
    for(int k=0;k<= x;k++){
        if(board[k][y] == 1){
            return false;
        }
    }
    //left diagonal
    int i=x, j=y;
    while(i>= 0 && j>= 0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }
    //right diagonal
     i=x, j=y;
    while(i>= 0 && j>= 0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}

bool solveNQueen(int board[][20], int n, int i){
    //base case
    if(i == n){
        printBoard(board, n);
        return true;
    }

    //rec case
    //trying to place a queen in every row
    for(int j=0;j<n;j++){
        //checking if the current i,j is safe of not
        if(canPlace(board, n,i,j)){
            board[i][j] = 1;
            bool success = solveNQueen(board, n, i+1);
            if(success){
                return true;
            }
            //backtracking step
            board[i][j]= 0;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int board[20][20]= {0};
    solveNQueen(board, n, 0);
return 0;
}