#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
// WAP to print all Substrings of a Given String

int main() {
    char s[100]="abcd";
    int n = strlen(s);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<n; k++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }

    return 0;
}
