#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        } 
    }
    int rc[n];
    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<m; j++){
            k += arr[i][j];
            rc[i]=k;
        }
    }
    for(int i=0; i<n; i++){
        cout<<rc[i]<<" ";
    }
    int k=0;
    int max1 = max(rc[0],rc[n-1]);
    for(int i=0; i<n; i++){
        if(rc[i]==max1){
            k = i;
        }
    }
    cout<<"Maximum Row of index : "<<k;
    
    cout<<endl<<"Maximum Row Value is : "<<max1<<endl;
    

    return 0;
}