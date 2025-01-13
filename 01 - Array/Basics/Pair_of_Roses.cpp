#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		int target;
		cin>>target;

		sort(arr,arr+n);

		int left=0,right=n-1;
		int first=0,second=1e9;
		while(left<right){
			if(arr[left]+arr[right]==target){
				if(arr[right]-arr[left]<second-first){
					first=arr[left];
					second=arr[right];
				}
				left++;
				right--;
			}else if(arr[left]+arr[right]>target){
				right--;
			}else{
				left++;
			}
		}

		cout<<"Deepak should buy roses whose prices are "<<first<<" and "<<second<<"."<<endl;
	}
	return 0;
}