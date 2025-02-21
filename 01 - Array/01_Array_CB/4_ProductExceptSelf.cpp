#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int newarr[n];

    for(int i=0; i<n; i++){
        int prod = 1;
        for(int j=0; j<n; j++){
            if(i != j){
                prod *= arr[j];
            } 
        }
        newarr[i] = prod;
    }

    for(int i=0; i<n; i++){
        cout<<newarr[i]<< " ";
    }
    return 0;
}