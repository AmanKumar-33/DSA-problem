#include <iostream>
#include <string>

using namespace std;

// bool isPalindrome(string s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; i++) {
//         if (s[i] != s[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// string smallestPalindrome(string s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; i++) {
//         if (s[i] != s[n - i - 1]) {
//             s[n - i - 1] = s[i];
//             if (isPalindrome(s)) {
//                 return s;
//             }
//             s[i] = s[n - i - 1];
//             if (isPalindrome(s)) {
//                 return s;
//             }
//         }
//     }
//     return s;
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;
//     cout << "Smallest palindrome: " << smallestPalindrome(s) << endl;
//     return 0;
// }


