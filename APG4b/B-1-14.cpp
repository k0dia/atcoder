#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int maxNum;
  int minNum;

  maxNum = max(A,B,C);
  minNum = min(A,B,C);

  cout << maxNum - minNum << endl;
}