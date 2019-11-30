#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int x;
    cin >> x;
    string ans = "NO";
    if (x == 7 || x == 5 || x == 3) {
        ans = "YES";
    }

    cout << ans << endl;
    return 0;
}
