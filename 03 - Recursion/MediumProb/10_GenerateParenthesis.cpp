#include<bits/stdc++.h>
using namespace std;

void generatePar(int open, int close, string output, vector<string>&ans){
	if(open == 0 && close == 0){
		ans.push_back(output);
		return;
	}
	if(close > open){
		generatePar(open, close-1, output+')', ans);
	}
	if(open > 0){
		generatePar(open-1, close, output+'(', ans);
	}
}

int main() {
	int n;
	cin>>n;
	string output;
	vector<string>ans;
	generatePar(n, n, output, ans);

	for(auto s : ans){
		cout<<s<<endl;
	}

	return 0;
}