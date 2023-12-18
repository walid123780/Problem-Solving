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
    int n = s.size();
    std::vector<int> zero, one;
    int o = 0, z = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == '0') {
        zero.push_back(i);
        z++;
      }
      else {
        one.push_back(i);
        o++;
      } 
    }
    string t = s;
    int l = 0;
    while(l < min(o, z)) {
      int a = one[l];
      int b = zero[l];
      int tt = t[a];
      t[a] = t[b];
      t[b] = tt;
      l++;
    }   
    int ans = 0, i = 0, j = 0;
    while(i < n and j < n) {
      if(s[i] == t[j]) {
        ans++;
        j++;
      }
      else i++, j++;
    }   
    cout << ans << endl;
  }
  return 0;
}