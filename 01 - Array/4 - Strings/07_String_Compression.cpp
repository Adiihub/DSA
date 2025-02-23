#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   getline(cin, s);
   int n = s.length();

   // Approach - 1
   string res;
   for(int i=0; i<n; i++){
       char curChar = s[i];
       int count = 1;

       while(i+1 < n && s[i] == s[i+1]){
           count++;
           i++;
       }

       res += curChar + to_string(count); 
   }
   cout<<res<<endl;

   // Approach - 3
   // By using map

   // Approach - 2
//    vector<int>arr(26, 0);
//    string alphabet = "abcdefghijklmnopqrstuvwxyz";

//    for(int i=0; i<s.length(); i++){
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             arr[s[i] - 'a']++;
//         }
//    }
//    for(int i=0; i<26; i++){
//        if(arr[i] > 0){
//            cout<<alphabet[i]<<arr[i];
//        }
//    }

    return 0;
}
