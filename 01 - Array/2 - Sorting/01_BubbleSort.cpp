// Bubble Sort
#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        bool isSorted=true;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSorted=false;
            }
        }
        if(isSorted==true){
            break;
        }
    }
}

int main(){
    int arr[]={4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
