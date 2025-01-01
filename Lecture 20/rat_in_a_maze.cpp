#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(vector<string>& grid,int i,int j, vector<vector<int>>& path){
    // base case
    // last cell pe pahuch gaya
    if(i==n-1 && j==m-1){
        path[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        // back track
        path[i][j]=0;
        return ;
    }
    // recursion
    if(i<n && j<m &&  grid[i][j]=='.'){
        // current cell mere path ka part hai
        path[i][j]=1;
        // right me check kr
        solve(grid,i,j+1,path);
        // down check kr
        solve(grid,i+1,j,path);

        // backtrack
        path[i][j]=0;
    }
    
}


int main(){
    vector<string> grid={"....","..XX","....",".X.."};
    n=grid.size();
    m=grid[0].size();
    vector<vector<int>> path(n,vector<int>(m,0));
    solve(grid,0,0,path);
    // after recursion call
    cout<<"after recursion call:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}