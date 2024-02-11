#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    if(a % 2 and  b % 2) {
      cout << "No\n";
    }
    else if((!(a % 2) and b != (a / 2)) || (!(b % 2) and a != (b / 2))) {
      cout << "Yes\n";
    }
    else cout << "No\n";
 }
 return 0;
}