#include<bits/stdc++.h>
using namespace std;

bool palindrom(string str){
    int i=0, j=str.length()-1;
    while(i < j){
        if(str[i] != str[j]) return false;
        i++; j--;
    }
	return true;
}

int main() {
	string s;
	getline(cin, s);
	int n = s.length();
	int count = 0;

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			string temp = s.substr(i, j-i+1);
			if(palindrom(temp)){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
