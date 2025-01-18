#include <bits/stdc++.h> 
using namespace std; 
 
class Solution
{
  public:
    // function to count the total    
    // number of ways to sum up to 'N' 
    int Ways(int arr[], int n, int sum){
        if(sum == 0)
        return 1;
        if(sum < 0)
        return 0;
        long long ans =0;
        for(int i=0; i<n; i++){
            ans += Ways(arr, n, sum-arr[i]);
        }
        return ans%1000000007;
    }
    int countWays(int arr[], int m, int N) 
    { 
      return Ways(arr, m, N);
    } 
    
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int m,n ;
	        cin>>m>>n;
	        int arr[m];
	        for(int i = 0;i<m;i++)
	            cin>>arr[i];
	        Solution ob;     
	        cout<<ob.countWays(arr,m,n)<<endl;
	    
cout << "~" << "\n";
}
} 