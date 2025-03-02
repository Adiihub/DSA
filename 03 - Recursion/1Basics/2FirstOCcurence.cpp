#include<bits/stdc++.h>
using namespace std;

int fo(int arr[], int n, int key) {
    if (n == 0)   
        return -1;
    if (arr[0] == key)  
        return 0;

    int i = fo(arr + 1, n - 1, key); 
    if (i == -1)  
        return -1;

    return i + 1;  
}

int fo2(int arr[], int i, int n, int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return fo2(arr, i+1, n, key);   
}

int main() {
    int arr[] = {4, 5, 6, 3, 4, 5, 3, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << "Index is: " << fo(arr, n, 5) << endl; 
    cout<<"Index is : "<<fo2(arr, 0, n, 4);
    return 0;
}
