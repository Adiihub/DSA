#include<bits/stdc++.h>
using namespace std;

void toh(int n,char src,char help,char des,int &c){
    if(n==0){
        return ;
    }
    toh(n-1,src,des,help, c);
    cout<<n<<": "<<src<<"-->"<<des<<endl;
    c++;
    toh(n-1,help,src ,des, c);
}

int main(){
    int n;
    cin>>n;
    int c = 0;
    toh(n,'A','B','C', c);
    cout << "Total moves: " << c << endl;
    return 0;

}