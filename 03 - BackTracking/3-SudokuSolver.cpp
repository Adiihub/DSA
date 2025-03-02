#include<bits/stdc++.h>
using namespace std;

bool canPlace(int mat[][9], int i, int j,int n, int number){

    for(int x=0; x<n; x++){
        //Row & Colm Check
        if(mat[x][j]==number || mat[i][x]==number){
            return false;
        }
    }

    int rn = sqrt(n);
    int sx = (i/rn)*rn;
    int sy = (j/rn)*rn;

    for(int x=sx; x<sx+rn; x++){
        for(int y=sy; y<sy+rn; y++){
            if(mat[x][y]==number){
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n){
    // Base Case
    if(i == n){
        // Print the matrix
        for(int p=0; p<n; p++){
            for(int q=0; q<n; q++){
                cout<<mat[p][q]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //Case Row End
    if(j == n){
        return solveSudoku(mat, i+1, j, n);
    }
    //Skip the Pre-filled Calls
    if(mat[i][j] != 0){
        return solveSudoku(mat, i, j+1, n);
    }
    // Rec Case
    // Fill the current Cell with possible Options
    for(int number=1; number<=n; number++){
        if(canPlace(mat, i, j, n, number)){
            // Assume
            mat[i][j] = number;

            bool couldWeSolve = solveSudoku(mat, i, j+1, n);
            if(couldWeSolve){
                return true;
            }
        }
    }
    // Backtrack here
    mat[i][j] = 0;
    return false;
}

int main(){
    return 0;
}