#include <iostream>
using namespace std;
int min_moves(int x, int y) {
 if (x <= y) {
 return 1;
 } else if (x % y == 0) {
 return x / y;
 } else {
 return x / y + 1;
 }
}
int main() {
 int t;
 cin >> t;
 for (int i = 0; i < t; i++) {
 int x, y;
 cin >> x >> y;
 int moves = min_moves(x, y);
 cout << moves << endl;
 }
 return 0;
}
