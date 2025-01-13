#include<bits/stdc++.h>
using namespace std;

bool safeHai(vector<vector<char>>& grid,int row,int col,int n){
    for(int j=col;j>=0;j--){
        if(grid[row][j]=='Q') return false;
    }

    for(int i=row,j=col;i>=0,j>=0;i--,j--){
        if(grid[i][j]=='Q') return false;
    }

    for(int i=row,j=col;i<n && j>=0;i++,j--){
        if(grid[i][j]=='Q') return false;
    }

    return true;
}
void solve(vector<vector<char>>& grid,int col,int n){
    // base case 
    if(col==n){
        // print solution
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        return ;
    }
    // recursion -> ek valid position pe place kr de baki recursion dekh lega
    for(int row=0;row<n;row++){
        if(grid[row][col]=='.'){
            if(safeHai(grid,row,col,n)){
                grid[row][col]='Q';
                // go and try for next cols
                solve(grid,col+1,n);
                //backtrack
                grid[row][col]='.';
            }
        }
    }
}

int main(){
    int n=4;
    vector<vector<char>> grid(n,vector<char>(n,'.'));
    solve(grid,0,n);
    return 0;
}