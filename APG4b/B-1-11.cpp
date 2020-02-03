#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  int B;
  int x = A;
  string op;
  cin >> N >> A;
 
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
      }
      cout << i << ":" << x << endl;
  }
}