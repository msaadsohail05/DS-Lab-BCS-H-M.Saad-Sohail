#include <iostream>
using namespace std;

const int n=4;
int maze[n][n];
int solution[n][n]={0};

bool isSafe(int x,int y){
    if(x>=0&&x<n&&y>=0&&y<n&&maze[x][y]==1){
        return true;
    }
    else{
        return false;
    }
}

bool solve(int x,int y){
    if(x==n-1&&y==n-1){
        solution[x][y]=1;
        return true;
    }
    if(isSafe(x,y)&&solution[x][y]==0){
        solution[x][y]=1;
        if(solve(x,y+1)){
            return true;
        }
        if(solve(x+1,y)){
            return true;
        }
        if(solve(x,y-1)){
            return true;
        }
        if(solve(x-1,y)){
            return true;
        }
        solution[x][y]=0;
        return false;
    }
    return false;
}

void printSolution(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solution[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    if(solve(0,0)){
        printSolution();
    }
    else{
        cout<<"No path found"<<endl;
    }
    return 0;
}
