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
    string s;
    cin >> s;
    int k = 0, frq = 0;
    for(int i = n - 1; i >= 0; i--) {
      if(s[i] == 'B') frq++;
    }
    if(frq > m) {
      for(int i = n - 1; i >= 0; i--) {
        if(s[i] == 'B') m--;
        if(m == -1) {
          cout << 1 << "\n" << i + 1 << " A"  << endl;
          break;
        } 
      }
    }
    else if(m > frq) {
      int f = m - frq;
      for(int i = 0; i < n; i++) {
        if(s[i] == 'B') continue;
        else f--;
        if(f == 0) {
          cout << 1 << "\n" << i + 1 << " B" << endl;
          break;
        } 
      }
    }
    else cout << 0 << endl;
  } 
  return 0;
}