#include <iostream>
using namespace std;

class Solution {
public:
    int MOD = 1000000007;

    long long power(long long a, long long b) {
        if (b == 0) {
            return 1;
        }
        long long half_power = power(a, b / 2);
        if (b % 2 == 0) {
            return half_power * half_power % MOD;
        } else {
            return half_power * half_power % MOD * (a % MOD) % MOD;
        }
    }

    int countGoodNumbers(long long n) {
        long odd = n / 2;
        long even = n - odd;
        long long ans = (power(4, odd) * power(5, even)) % MOD;
        return ans;
    }
};

int main() {
    Solution solution;
    long long n;
    
    // Input value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Output the result
    cout << "Total number of good numbers: " << solution.countGoodNumbers(n) << endl;

    return 0;
}
