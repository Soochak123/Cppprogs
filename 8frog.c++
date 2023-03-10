#include <iostream>
#include <cmath>
using namespace std;
int main() {
 int x, y, s, T;
 cin >> x >> y >> s >> T;
 int count = 0;
 for (int i = x; i <= x+s; i++) {
 for (int j = y; j <= y+s; j++) {
 int dist = abs(i-x) + abs(j-y);
 if (dist <= T && (T-dist) % 2 == 0) {
 count++;
 }
 }
 }
 cout << count << endl;
 return 0;
}