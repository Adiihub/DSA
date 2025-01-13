#include<iostream>
#include<vector>
using namespace std;
// pass by reference
void print(vector<vector<char>>& vec){
    int n=vec.size();
    int m=vec[0].size();
    for(int i=0;i<n;i++){
        for(int  j=0;j<m;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // declare
    vector<vector<int>> nums1;
    // declare+ initialize
    vector<vector<int>> nums2={{1,2,3},
                               {4,3,5},
                               {9,10,11}};

    // int rows=nums2.size();
    // int cols=nums2[0].size();

    vector<vector<int>> nums3={{1,2,3,4},
                                {3,4}};
    int rows=nums3.size();
    for(int i=0;i<rows;i++){
        int cols=nums3[i].size();
        for(int j=0;j<cols;j++){
            cout<<nums3[i][j]<<" ";
        }
        cout<<endl;
    }

    // input rows=n and cols =m
    // 2d vector of n*m
    int n,m;
    cin>>n>>m;
    vector<vector<char>> vec(n,vector<char>(m,'a'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    print(vec);
    return 0;
}