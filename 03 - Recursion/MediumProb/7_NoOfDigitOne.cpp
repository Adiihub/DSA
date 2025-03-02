#include<bits/stdc++.h>
using namespace std;

// Given integer n, count total number of digit 1 appearing in all integers less than or equal to n.

int twins(string s, int i, int n){
	if(i >= n) {
		return 0;
	}
	if(s[i] == s[i+2]){
		return 1 + twins(s, i+1, n);
	}
	else{
		return 0 + twins(s, i+1, n);
	}
}

int main() {
	string s;
	cin>>s;
	cout<<twins(s, 0, s.size());

	return 0;
}
