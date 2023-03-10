#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
 int t;
 cin >> t;
 while (t--) {
 int n;
 cin >> n;
 int skills[n];
 for (int i = 0; i < n; i++) {
 cin >> skills[i];
 }
 sort(skills, skills + n); // sort the skills in non-decreasing order
 int min_diff = INT_MAX;
 for (int i = 1; i < n; i++) {
 int diff = skills[i] - skills[i-1];
 if (diff < min_diff) {
 min_diff = diff;
 }
 }
 cout << min_diff << endl;
 }
 return 0;
}