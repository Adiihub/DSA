#include<bits/stdc++.h>
using namespace std;

// Take as input N, a number. N is the size of a snakes and ladder board (without any snakes and ladders). Take as input M, a number. M is the number of faces of the dice.

// Write a recursive function which returns the count of different ways the board can be traveled using the dice. Print the value returned.

// Write a recursive function which prints dice-values for all valid paths across the board (void is the return type for function).

// Input Format - Enter a number N (size of the board) and number M(number of the faces of a dice)

int boardPathCount(int n, int m, string path){
	if(n == 0){
		cout<<path<<" ";
		return 1;
	}
	if(n < 0){
		return 0;
	}
	int count = 0;
	for(int i=1; i<=m; i++){
		count +=  boardPathCount(n-i, m, path + to_string(i));
	}
	return count;
}

int main() {
	int n, m;
	cin>>n>>m;
	string path;
	int k = boardPathCount(n, m, path);
	cout<<endl<<k;
	return 0;
}