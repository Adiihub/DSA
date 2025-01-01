#include<bits/stdc++.h>
using namespace std;

int main(){
    // // how to declare 2D array
    // int matrix[2][3];
    // // initiliasation + Declaration
    // int mat1[2][3]= {{1,2,3},
    //                  {4,2,1}};

    // int mat2[][3]={ {1,2,3},
    //                 {2,3,4},
    //                 {3,4,5}};
    
    // int n,m;
    // int mat[n][m];




    // int mat3[][3]={{1,2,3},
    //               {2,3,4}};
    // // number of rows
    // int rows=sizeof(mat3)/sizeof(mat3[0]);
    // cout<<"rows: "<<rows<<endl;



    // print 
    int n;// rows
    int m;//cols
    cin>>n;
    cin>>m;

    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    // print
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}