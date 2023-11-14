#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    map<char, int> mp;
    set<int> se;
    for(int i = 0; i < n; i++) {
      mp[s[i]]++; se.insert(s[i]);
    }
    int odd = 0; 
    for(auto it : se) {
      if(mp[it] % 2) {
        odd += 1;
        mp[it] -= 1;
      } 
    }
    odd -= k;
    n += odd;
    if(n >= 0 and odd <= 1) {
      cout << "Yes\n";
    } 
    else cout << "No\n";
  } 
  return 0;
}