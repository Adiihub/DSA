#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
	return (a+b) > (b+a);
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string>arr(n);
		string res;

		for(int i=0; i<n; i++){
			cin>>arr[i];
		}

		sort(arr.begin(), arr.end(), compare);

		for(auto i : arr){
			res += i;
		}

		cout<<res<<endl;
	}
	return 0;
}