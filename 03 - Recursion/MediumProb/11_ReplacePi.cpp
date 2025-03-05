#include<iostream>
using namespace std;

string solve(string s,int n, int i){
	if(i == n){
		return "";
	}
	if(s[i] == 'p' && s[i+1] == 'i'){
		return "3.14" + solve(s, n, i+2);
	}
	else{
		return s[i] + solve(s, n, i+1);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s, s.length(), 0)<<endl;

	}

	return 0;
}