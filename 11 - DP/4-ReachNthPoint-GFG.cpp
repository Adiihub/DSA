//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

class Solution{
	public:
	    int count(int n, vector<int>&dp){
	        if(n<=1) return 1;
	        if(n == 2) return 2;
	        
	        if(dp[n] != -1){
	            return dp[n];
	        }
	        return dp[n] = (count(n-1, dp) + count(n-2, dp)) % 1000000007;
	    }
	    
		int nthPoint(int n){
		    vector<int>dp(n+1, -1);
		    
		    return (count(n, dp))%1000000007;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends