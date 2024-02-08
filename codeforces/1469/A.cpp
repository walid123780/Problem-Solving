#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    string s; cin >> s;
    int len = s.size();
    if(len % 2) {
      cout << "No\n";
    }
    else if(s[0] == ')' or s[len - 1] == '(') {
      cout << "No\n";
    }
    else cout << "Yes\n";
  } 
  return 0;
}