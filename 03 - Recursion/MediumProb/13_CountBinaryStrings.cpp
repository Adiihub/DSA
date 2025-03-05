#include<bits/stdc++.h>
using namespace std;

// Count Binary Strings Without Consecutive 1's

int count(int n, int ld){
    // base case
    if(n == 0){
        return 0;
    }
    if(n == 1){ 
        if(ld == 0){
            return 2; // agr hamara last digit 0 h
        }
        else{
            return 1;  // agr hamara last digit 1 h
        }
    }

    if(ld == 0){
        return count(n-1, 0) + count(n-1, 1);
    }
    else{
        return count(n-1, 0);
    }
}

int main(){
    int n = 3;
    cout << count(n, 0) << endl;

    return 0;
}