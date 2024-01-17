#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c <= b and a <= d) {
      cout << min(a + c, max(a, c)) << endl;
    }   
    else cout << a + c << endl;
  }
  return 0;
}