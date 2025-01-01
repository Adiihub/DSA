#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    void reverse(vector<int>& v){
        int m=v.size();
        int left=0,right=m-1;
        while(left<right){
            swap(v[left],v[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        transpose(matrix);
        for(int i=0;i<n;i++){
            reverse(matrix[i]);
        }
    }
};

int main(){
    Solution s;
    // vector<int> v
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    s.rotate(matrix);

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}