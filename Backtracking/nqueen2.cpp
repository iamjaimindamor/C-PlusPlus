#include<iostream>
#include<vector>
using namespace std;

void PrintBoard(vector<vector<char>> board){
    int n = board.size();

    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout << board[row][col] << " ";
        }

        cout << endl;
    }

    cout << "----------------\n";
}

bool isSafe(vector<vector<char>> board , int row , int col){

    int n = board.size();
    //horizontal base case
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }

    //vertical base case
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    //diagonal left
    for(int i=row,j=col;i>=0 && j>=0 ;i--,j--){

        if(board[i][j]=='Q'){
            return false;
        }
    }

    //diagonal right
    for(int i=row,j=col;i>=0 && j<n; i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

bool nQueens(vector<vector<char>> board,int row){

    int n = board.size();

    if(row==n){
        PrintBoard(board);
        return true;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,row,j)){
        board[row][j] = 'Q';
        if(nQueens(board,row+1)){
            return true;
        };
        board[row][j] = '.';
        }
    }

    return false;
    
}

void createBoard(int n){
  
    vector<vector<char>> board;
    for(int row=0;row<n;row++){
        vector<char> newChar;
        for(int col=0;col<n;col++){
            newChar.push_back('.');
        }
        board.push_back(newChar);
    }

   nQueens(board,0);
};

int main(){
    createBoard(5);
    return 0;
}