#include <bits/stdc++.h>
using namespace std;
 
class Solution {
  public:
    int row[4] = {-1, 0, 1, 0};
    int col[4] = {0, 1, 0, -1};
    string dir = "URDL";
    
    bool valid(int i, int j, int n){
        return i >= 0 && j >=0 && i<n && j<n;
    }
  
    void solve(vector<vector<int>>matrix, int i, int j, 
    int n, string& path, vector<string>&ans, vector<vector<bool>>visited){
        if(i == n-1 && j == n-1){
            ans.push_back(path);
            return;
        }
        visited[i][j] = 1;
        for(int k=0; k<4; k++){
            
            if(valid(i+row[k], j+col[k], n) && matrix[i + row[k]][j + col[k]] && 
            !visited[i+row[k]][j+col[k]]){
                
                path.push_back(dir[k]);
                solve(matrix, i+row[k], j+col[k], n, path, ans, visited);
                path.pop_back();
            }
        }
        visited[i][j] = 0;
    }
    
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string>ans;
        int n = mat.size();
        string path="";
        vector<vector<bool>> visited(n, vector<bool>(n, 0));
        
        if(mat[0][0] == 0 || !mat[n-1][n-1]){
            return {};
        }
        
        solve(mat, 0, 0, n, path, ans, visited);
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
} 