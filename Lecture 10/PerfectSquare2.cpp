#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int start = 0, end=n;
    bool isPerfectSquare = false;
    while(start<=end){
        int mid=(start+end)/2;
        if(mid*mid==n){
            isPerfectSquare = true;
            break;
        }
        else if(mid*mid>n){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    if(isPerfectSquare){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    

    return 0;
}