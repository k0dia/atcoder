#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  int B;
  string op;
  cin >> N >> A;
  int x = A;
 
  for (int i = 0; i < N;i++){
      cin >> op >> B;
      if (op == "+") {
          x += B;
      } else if (op == "-"){
          x -= B;
      } else if (op == "*"){
          x *= B;
      } else if (op == "/" && B != 0){
          x /= B;
      } else {
          cout << "error" << endl;
          break;
      }
      cout << i+1 << ":" << x << endl;
  }
}