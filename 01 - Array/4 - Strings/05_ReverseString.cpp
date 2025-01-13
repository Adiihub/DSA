#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100]="coding";
    int n=strlen(str);
    int left=0,right=n-1;
    cout<<"Before: "<<str<<endl;
    while(left<=right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<"After : "<<str<<endl;

    return 0;
}
