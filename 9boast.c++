#include <iostream>
using namespace std;
int main() {
 int T;
 cin >> T;
 while (T--) {
 int N;
 cin >> N;
 int A[N];
 for (int i = 0; i < N; i++) {
 cin >> A[i];
 }
 int count = 0;
 for (int i = 0; i < N; i++) {
 int less = 0, greater = 0;
 for (int j = 0; j < N; j++) {
 if (i != j) {
 if (A[j] <= A[i]) {
 less++;
 } else {
 greater++;
 }
 }
 }
 if (less > greater) {
 count++;
 }
 }
 cout << count << endl;
 }
 return 0;
}
