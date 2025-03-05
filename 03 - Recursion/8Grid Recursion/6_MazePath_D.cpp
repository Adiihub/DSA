#include<iostream>
#include<vector>
#include<string>
using namespace std;

char arr[3] = {'H','D','V'};

void mazepath(int n, int m, string path, vector<string>&paths, int i, int j, int &count){
	if(i == n || j == m){
		return;
	}
	if(i == n-1 && j == m-1){
		paths.push_back(path);
		count++;
		return;
	}

 	mazepath(n, m, path+'V', paths, i+1, j, count); //right
 	mazepath(n, m, path+'H', paths, i, j+1, count);  // diagonal
	mazepath(n, m, path+'D', paths, i+1, j+1, count); // down
	 
}
int main() {
	int n;
	cin>>n;
	int m;
	cin>>m;
	vector<string>paths;
	int count = 0;
	mazepath(n, m,"", paths, 0, 0, count);
	for(int i=0; i<paths.size(); i++){
		cout<<paths[i]<<" ";
	}
	cout<<endl<<count;

	return 0;
}