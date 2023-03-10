#include <iostream>
using namespace std;
int main() {
 int T;
 cin >> T;
 while (T--) {
 int X, Y, Z;
 cin >> X >> Y >> Z;
 int time = X * Y;
 int breaks = X / 3;
 if (X % 3 == 0) {
 breaks--;
 }
 time += breaks * Z;
 cout << time << endl;
 }
 return 0;
}
