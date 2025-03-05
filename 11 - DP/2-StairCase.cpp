#include <iostream>
#include <vector>
using namespace std;

// Dynamic Programming (Efficient, O(n) Time & O(n) Space)

#include <bits/stdc++.h>
using namespace std;

vector<int> memo(1000, -1); // Initialize a memoization table with -1

int fib(int n) {
    if (n == 0 || n == 1) return n; 

    if (memo[n] != -1) return memo[n]; // If already computed, return stored value

    memo[n] = fib(n - 1) + fib(n - 2); // Compute and store the result
    return memo[n];
}


// BottomUp Approach
int climbStairs(int n) {
    if (n <= 2) return n;

    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// Space Optimization
int climbStairs(int n) {
    if (n <= 2) return n;

    int first = 1, second = 2, third;
    for (int i = 3; i <= n; i++) {
        third = first + second;
        first = second;
        second = third;
    }
    return third;
}


int main() {
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    cout << "Ways to climb: " << climbStairs(n) << endl;
    return 0;
}
