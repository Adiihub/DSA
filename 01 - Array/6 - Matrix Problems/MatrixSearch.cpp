#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	int tar;
	cin>>tar;

	// Brute Force Approach
	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<m; j++){
	// 		if(arr[i][j] == tar){
	// 			cout<<"1";
	// 			return 0;
	// 		}
	// 	}
	// }
	
	// Optimal Approach
	int i=0, j=m-1;
	while(i<n && j>=0){
		if(arr[i][j] == tar){
			cout<<"1";
			return 0;
		}
		if(arr[i][j] < tar){
			i++;
		}
		else{
			j--;
		}
	}

	cout<<'0';

	return 0;
}