#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){

                    // left
                    for(int k=j-1;k>=0;k--){
                        if(matrix[i][k]!=0)
                            matrix[i][k]=-1;
                    }
                    // right
                    for(int k=j+1;k<m;k++){
                        if(matrix[i][k]!=0)
                            matrix[i][k]=-1;
                    }
                    // top
                    for(int k=i-1;k>=0;k--){
                        if(matrix[k][j]!=0)
                            matrix[k][j]=-1;
                    }
                    // bottom
                    for(int k=i+1;k<n;k++){
                        if(matrix[k][j]!=0)
                            matrix[k][j]=-1;
                    }

                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }

        
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution s;
    s.setZeroes(matrix);
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}