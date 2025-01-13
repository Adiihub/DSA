#include<bits/stdc++.h>
using namespace std;

void reverse(char str[],int left,int right){
    while(left<=right){
        swap(str[left++],str[right--]);
    }
}

int main(){

    char str[1000];
    cin>>str;
    int n;
    cin>>n;
    int len=strlen(str);
    reverse(str,0,len-1);
    reverse(str,0,n-1);
    reverse(str,n,len-1);


    cout<<str<<endl;

    return 0;

}