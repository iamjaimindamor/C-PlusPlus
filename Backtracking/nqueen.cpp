#include<iostream>
#include<vector>
using namespace std;

void printBoard(vector<vector<char>> board){
    int n = board.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << "------------------------\n";
};

bool isSafe(vector<vector<char>> board,int row,int col){

    //horizontal
    for(int j=0;j<board.size();j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }

    //vertical
    for(int i=0;i<board.size();i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }

    //diagonal left
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    //diagonal right
    for(int i=row,j=col;i>=0 && j<board.size();i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

void nQueen(vector<vector<char>> board,int row){

    int n = board.size();
    
    if(row==n){
        printBoard(board);
        return;
    }

    for(int j=0;j<n;j++){

        if(isSafe(board,row,j)){
            board[row][j] = 'Q';
            nQueen(board,row+1);
            board[row][j] = '.';
        }

    }

}

void createBoard(int n){
    vector<vector<char>> board;

    for(int row=0;row<n;row++)
    {
        vector<char> newChar;
        for(int col=0; col<n;col++){
            newChar.push_back('.');
        }
        board.push_back(newChar);
    }

    nQueen(board,0);
};



int main(){
    int n=5;
    createBoard(n); 
    return 0;
}