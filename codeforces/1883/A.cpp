#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    int ans = (s[0] - '0');
    if(ans == 0) ans = 10;
    ans -= 1;
    for(int i = 1;i < s.size(); i++) {
      int a = s[i - 1] - '0';
      int b = s[i] - '0';
      if(a == 0) a = 10;
      if(b == 0) b = 10;
      ans += abs(a - b);
    }
    cout << ans + 4 << endl;
  }  
  return 0;
}