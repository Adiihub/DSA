#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string below10[10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string below20[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string below100[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        return intToString(num);
    }

    string intToString(int num) {
        if (num >= 1000000000) {
            return intToString(num / 1000000000) + " Billion" + (num % 1000000000 != 0 ? " " + intToString(num % 1000000000) : "");
        }
        if (num >= 1000000) {
            return intToString(num / 1000000) + " Million" + (num % 1000000 != 0 ? " " + intToString(num % 1000000) : "");
        }
        if (num >= 1000) {
            return intToString(num / 1000) + " Thousand" + (num % 1000 != 0 ? " " + intToString(num % 1000) : "");
        }
        if (num >= 100) {
            return below10[num / 100] + " Hundred" + (num % 100 != 0 ? " " + intToString(num % 100) : "");
        }
        if (num >= 20) {
            return below100[num / 10] + (num % 10 != 0 ? " " + below10[num % 10] : "");
        }
        if (num >= 10) {
            return below20[num - 10];
        }
        return below10[num];
    }
};


int main(){
    Solution s;
    cout<<s.numberToWords(123);
    cout<<endl;
    cout<<s.numberToWords(2300);

    return 0;
}