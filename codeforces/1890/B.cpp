#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool red = false, zero = false, ans = true;
    for(int i = 0; i < m - 1; i++) {
      if(t[i] == t[i + 1]) {
        red = true;
        break;
      }
    }
    if(m % 2 == 0) red = true;
    if(!red) {
      if(t[0] == '0') zero = true;
      for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i + 1] and s[i] == '0' and zero) {
          ans = false;
        }
        else if(s[i] == s[i + 1] and s[i] == '1' and !zero) {
          ans = false;
        }
      }
    }
    else if(red) {
      for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i + 1]) {
          ans = false;
        }
      }
    }
    if(ans) {
      cout << "Yes\n";
    }    
    else cout << "No\n";
  } 
  return 0;
}