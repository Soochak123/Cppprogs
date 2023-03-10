#include <iostream>
using namespace std;
bool is_vowel(char c) {
 return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
bool has_happy_substring(string s) {
 int n = s.size();
 for (int i = 0; i < n - 2; i++) {
 if (is_vowel(s[i]) && is_vowel(s[i+1]) && is_vowel(s[i+2])) {
 return true;
 }
 }
 return false;
}
int main() {
 int T;
 cin >> T;
 while (T--) {
 string s;
 cin >> s;
 if (has_happy_substring(s)) {
 cout << "HAPPY" << endl;
 } else {
 cout << "SAD" << endl;
 }
 }
 return 0;
}