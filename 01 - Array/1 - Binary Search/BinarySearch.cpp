#include<bits/stdc++.h>
using namespace std;
bool  BinarySearch(int arr[],int target,int n){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return true;
        }else if(arr[mid]>target){
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }
    }

    return false;

}
int main(){
    int arr[]={1,2,4,6,8,10,12,14};
    int n=sizeof(arr)/sizeof(int);
    int target=1;
    bool ans=BinarySearch(arr,target,n);
    if(ans==true){
        cout<<"target found !!!"<<endl;
    }else{
        cout<<"Not found !!!"<<endl;
    }
    return 0;
}

 