//Muhammad Saad Sohail    24K-0549

#include <iostream>
using namespace std;

bool isSafe(int board[9][9],int row,int col,int num){
    for(int x=0;x<9;x++){
        if(board[row][x]==num||board[x][col]==num){
        	return false;	
		} 
    }
    int startRow=row-row%3,startCol=col-col%3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i+startRow][j+startCol]==num){
            	return false;
			}
        }
    }
    return true;
}

bool solveSudoku(int board[9][9],int row,int col){
    if(row==8&&col==9){
    	return true;	
	} 
    if(col==9){
        row++;
        col=0;
    }
    if(board[row][col]!=0) return solveSudoku(board,row,col+1);
    for(int num=1;num<=9;num++){
        if(isSafe(board,row,col,num)){
            board[row][col]=num;
            if(solveSudoku(board,row,col+1)){
            	return true;
			} 
            board[row][col]=0;
        }
    }
    return false;
}

void printBoard(int board[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int board[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
        }
    }
    if(solveSudoku(board,0,0)) printBoard(board);
    else cout<<"No solution exists"<<endl;
    return 0;
}
