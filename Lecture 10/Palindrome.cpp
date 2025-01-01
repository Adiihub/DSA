#include<iostream>
#include<cstring>
using namespace std;

int main(){
     
    char str[1000];
    cin.getline(str,100);
    int size = strlen(str);

    int left=0, right=size-1;
    while(left<=right && str[left]==str[right]){
        left++;
        right--;
    }
    if(left>=right){
        cout<<"Yes! It's Palindrome"<<endl;
    }
    else{
        cout<<"No! It's not palindrome"<<endl;
    }
        
    

    return 0;
}