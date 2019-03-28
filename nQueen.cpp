#include<bits/stdc++.h>
using namespace std;
#define N 8

void printBoard(int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return false;
    }
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
    {
        if (board[i][j])
            return false;
    }
    return true;
}

bool nQueenHelper(int board[N][N],int col){
    if(col==N){
        return true;    
    }
    else{
        for(int i=0;i<N;i++){
            if(isSafe(board,i,col)){
                board[i][col]=1;
                if(nQueenHelper(board,col+1)){
                   return true;
                }
            }
            
            board[i][col]=0;
        }
    }
    return false;
    
}

void nQueen(){
    int board[N][N]={0};
    int col = 0;
    if(nQueenHelper(board,col)){
        cout<< "Solution exist"<< endl;
        printBoard(board);
    }
    else{
        cout<< "Solution doesn't exist"<< endl;
    }
}


int main(){
    nQueen();
}
