#include<bits/stdc++.h>
using namespace std;

int Lo(int arr[], int n, int key) {
    if (n == 0)   
        return -1;

    int k = Lo(arr + 1, n - 1, key);  
    
    if (arr[0] == key)  
        return 0;   
    
    if(k != -1){
        return k + 1;  
    }
    
    return -1;  
}

int Lo2(int arr[], int n, int key){
    if (n == 0) {
        return -1;   
    }
    if (arr[n-1] == key) {
        return n-1;   
    }
    return Lo2(arr, n-1, key);  
}

int main() {
    int arr[] = {4, 5, 6, 3, 4, 5, 3, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    
    cout << "Index is: " << Lo(arr, n, 5) << endl; 
    cout << "Index is: " << Lo2(arr, n, 3) << endl;
    
    return 0;
}
