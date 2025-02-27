#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    string sortVowels(string s)
    {
        string vowels; // To hold vowels from string
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]))
            {
                vowels += s[i];
            }
        }

        sort(vowels.begin(), vowels.end());

        // Pointer to track position in the sorted vowels
        int j = 0;
        string res;

        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]))
            {
                res += vowels[j]; // Add the sorted vowel
                j++;
            }
            else
            {
                res += s[i]; // consonant
            }
        }
        return res;
    }
};
