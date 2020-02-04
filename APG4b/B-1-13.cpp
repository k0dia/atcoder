#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  int ave = 0;
  int sum = 0;

  for (int i = 0; i < N; i++){
      cin >> p.at(i);
      sum += p.at(i);
  }
  ave = sum / N;
  for (int i = 0; i < N; i++){
      cout << abs(p.at(i) - ave) << endl;
  }
}