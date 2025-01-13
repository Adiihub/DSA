#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[],int n){
    // select min 
    // swap
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }
}
int main(){
    int n=6;
    int arr[n]={9,100,20,80,10,3};
    Selection_Sort(arr,6);

    // Array after selection sort.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

