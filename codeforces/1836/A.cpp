#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    map<int, int> mp;
    set<int> s;
    for(int i  = 0; i < n; i++) {
      int x; cin >> x;
      s.insert(x);
      mp[x]++;  
    } 
    int last = 0;
    bool ok = true;
    for(auto it : s) {    
      if(it != last) {
        ok = false;
      }
      last++;
    } 
    last = 0;
    s.erase(*s.begin());
    for(auto it : s) {
      if(mp[it] > mp[last]) {
        ok = false;
      }
      last++;
    }
    if(ok) {
      cout << "Yes\n";
    }
    else cout << "No\n";
  } 
  return 0;
}