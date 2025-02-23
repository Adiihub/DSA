#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int n=s.size();
	string res;

	for(int i=0; i<n; i++){
		res += s[i];
		while(s[i] == s[i+1]){
			i++;
		}
	}
	cout<<res<<endl;
	return 0;
}