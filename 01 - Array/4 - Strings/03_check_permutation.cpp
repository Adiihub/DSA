#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

// WAF to check if two strings are permutations of each other.

int main(){
    char s1[100]="bcad";
    char s2[100]="bcad";

    int n = strlen(s1);
    int freq1[26]={0};
    int freq2[26]={0};

    // vector<int> freq1(26,0);
    // vector<int> freq2(26,0);

    for(int i=0; i<n; i++){
        int ind1 = s1[i]-'a';
        freq1[ind1]++;
        int ind2 = s2[i]-'a';
        freq2[ind2]++;
    }
    bool isPerm=true;
    for(int i=0; i<26; i++){
        if(freq1[i]!=freq2[i]){
            isPerm=false;
            break;
        }
    }

    if(isPerm==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}