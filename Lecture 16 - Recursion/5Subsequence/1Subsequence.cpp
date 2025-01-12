#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[], int index, int n, vector<vector<int>>&ans, vector<int>&temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //Non Take
    subsequence(arr, index+1, n, ans, temp);
    //Take
    temp.push_back(arr[index]);
    subsequence(arr, index+1, n, ans, temp);
    temp.pop_back();
}

int main(){
    int arr[] = {1,2};
    vector<vector<int>>ans;
    vector<int> temp;
    subsequence(arr, 0, 2, ans, temp);

    for(int i = 0; i < ans.size(); i++) {
        cout << "{ ";
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "}" << endl;
    }


    return 0;
}