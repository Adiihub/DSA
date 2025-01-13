#include<bits/stdc++.h>
using namespace std;

int main(){
    // n-> rows
    // m-> cols
    int n,m;
    cin>>n>>m;

    int Arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Arr[i][j];
        }
    }

    cout<<"Before Transpose"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"After Transpose"<<endl;
    int transpose[m][n];
    // m- rows
    // n- cols
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=Arr[j][i];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}