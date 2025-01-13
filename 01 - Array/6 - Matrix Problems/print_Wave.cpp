#include<bits/stdc++.h>
using namespace std;

int main(){
    // n-> rows
    // m-> cols
    int n,m;
    cin>>n>>m;

    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<mat[i][j]<<" ";
            }
        }else{
            for(int i=n-1;i>=0;i--){
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}