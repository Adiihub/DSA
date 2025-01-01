#include<bits/stdc++.h>
using namespace std;

int main(){
    // n-> rows
    // m-> cols
    int n;
    cin>>n;

    int Arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Arr[i][j];
        }
    }

    cout<<"Before Transpose"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(Arr[i][j],Arr[j][i]);
        }
    }

    cout<<"After Transpose"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
   
    return 0;

}