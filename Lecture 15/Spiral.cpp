#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0, right = m - 1;
        int top = 0, bottom = n - 1;

        while (left <= right && top <= bottom)
        {
            // left->right
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            if (top > bottom)
                break;
            for (int j = top; j <= bottom; j++)
            {
                ans.push_back(matrix[j][right]);
            }
            right--;
            if (left > right)
                break;
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            if (top > bottom)
                break;
            for (int j = bottom; j >= top; j--)
            {
                ans.push_back(matrix[j][left]);
            }
            left++;
        }

        return ans;
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
    vector<int> ans=s.spiralOrder(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}