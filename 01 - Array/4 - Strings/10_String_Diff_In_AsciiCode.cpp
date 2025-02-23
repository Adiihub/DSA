#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int n = s.length();
	string res;

	for(int i=0; i<n-1; i++){
		int v = s[i+1] - s[i];
		res += s[i] + to_string(v);
	}
	res.push_back(s[n-1]);
	cout<<res<<endl;

	return 0;
}