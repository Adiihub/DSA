#include<bits/stdc++.h>
using namespace std;

// Input - cbaeicde, Output - 3

int main() {
	string s;
	cin>>s;
	int n = s.size();

	int cursubs = 0, maxsubs = 0;

	for(int i=0; i<n; i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			cursubs++;
		}
		else{
			maxsubs = max(maxsubs, cursubs);
			cursubs = 0;
		}
		maxsubs = max(maxsubs, cursubs);
	}
	cout<<maxsubs<<endl;

	return 0;
}