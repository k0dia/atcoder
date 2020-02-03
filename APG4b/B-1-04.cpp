/*
int型の変数secondsは一年の秒数を表しています。これを利用して

1年は何秒か
2年は何秒か
5年は何秒か
10年は何秒か
を順に一行ずつ表示するプログラムを作って下さい。
うるう秒やうるう年のことは考え無くて良いとします。
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;
 
  // 以下のコメント/* */を消して追記する
  cout << seconds << endl;
  cout << seconds*2 << endl;
  cout << seconds*5 << endl;
  cout << seconds*10 << endl;
}