#include<bits/stdc++.h>
using namespace std;
// pair sum
// arr[]={1,3,2,4,5,3} 
// target=6

//print pairs whose sum is target
void print_PairSum(int arr[],int n,int target){
    // sort the array
    sort(arr,arr+n);
    int left=0,right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<arr[left]<<" "<<arr[right]<<endl;
            left++;
            right--;
        }else if(sum>target){
            right--;
        }else{
            left++;
        }
    }
}

void print_TripletSum(int arr[],int n,int target){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int newTarget=target-arr[i];

        int left=i+1,right=n-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==newTarget){
                cout<<arr[i]<<" "<<arr[left]<<" "<<arr[right]<<endl;
                left++;
                right--;
            }else if(sum>newTarget){
                right--;
            }else{
                left++;
            }
        }
    }
}
int main(){
    int arr[6]={1,3,2,4,5,3};
    int target=6;
    cout<<"pair sum"<<endl;
    print_PairSum(arr,6,6);
    cout<<endl;

    cout<<"Triplet Sum"<<endl;
    print_TripletSum(arr,6,6);

    return 0;
}
