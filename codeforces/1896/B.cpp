#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    int ok = n, ok1 = 0; 
    for(int i = 0; i < n; i++) {
      if(s[i] == 'A') {
        ok = i;
        break;
      }  
    }
    for(int i = 0; i < n; i++) {
      if(s[i] == 'B') {
        ok1 = i;  
      } 
    }
    cout << max(0, ok1 - ok) << endl;
  } 
  return 0;
}