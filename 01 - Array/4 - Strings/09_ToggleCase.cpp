#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int n=s.length();
	
	for(int i=0; i<n; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			// s[i] = toupper(s[i]);
			s[i] = s[i] - 'a' + 'A';
		}
		else{
			s[i] = tolower(s[i]);
		}
	}
	cout<<s<<endl;

	return 0;
}