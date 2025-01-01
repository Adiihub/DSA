#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int s,int mid,int e){
    int n=mid-s+1;
    int m=e-mid;
    int b[n],c[m];
    for(int i=0;i<n;i++){
        b[i]=a[s+i];
    }
    for(int j=0;j<m;j++){
        c[j]=a[mid+1+j];
    }

    int i=0,j=0;
    int k=s;
    while(i<n && j<m){
        if(b[i]<c[j]){
            a[k]=b[i];
            i++,k++;
        }else{
            a[k]=c[j];
            k++,j++;
        }
    }

    while(i<n) {
        a[k]=b[i];
        k++;
        i++;
    }

    while(j<m){
        a[k]=c[j];
        k++;
        j++;
    }
}

void mergeSort(int a[],int s,int e){
    if(s>=e)
        return;
    int mid=(s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,mid,e);
}


int main(){
    int a[]={5,0,3,4,2,1};
    int n=sizeof(a)/sizeof(int);
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}