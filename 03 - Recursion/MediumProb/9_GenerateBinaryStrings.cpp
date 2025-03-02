#include<iostream>
using namespace std;

void GenerateBinaryString(string &s, int idx, int n){
	if(idx == n){
		cout<<s<<" ";
		return;
	}
	if(s[idx] == '?'){
		s[idx] = '0';
		GenerateBinaryString(s, idx+1, n );

		s[idx] = '1';
		GenerateBinaryString(s, idx+1, n );

		s[idx] = '?';
	}
	else{
		GenerateBinaryString(s, idx+1, n);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		GenerateBinaryString(s, 0, s.size());
	}
	return 0;
}