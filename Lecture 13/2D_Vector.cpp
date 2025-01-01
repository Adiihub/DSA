#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    void reverse(vector<int>& v){
        int n = v.size();
        int left=0, right=n-1;
        while(left<right){
            swap(v[left],v[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        transpose(matrix);
        for(int i=0; i<n; i++){
            reverse(matrix[i]);
        }
    }
};

int main(){
    Solution s;
    // b

    return 0;
}