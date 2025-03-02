#include<bits/stdc++.h>
using namespace std;

void permu(string s, string original, int idx, int n, set<string>&ans){
	if(idx == n){
		if(s > original){
			ans.insert(s);
		}
		return;
	}
	for(int i=idx; i<n; i++){
		swap(s[i], s[idx]);
		permu(s, original, idx+1, n, ans);
		swap(s[i], s[idx]);
	}
}

int main() {
	string s;
	cin>>s;
	int n = s.size();
	set<string>ans;

	permu(s, s, 0, n, ans);

	for(auto i : ans){
		cout<<i<<endl;
	}

	return 0;
}