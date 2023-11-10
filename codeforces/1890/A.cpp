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
    std::vector<int> v(n);
    set<int> s;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]] ++;
      s.insert(v[i]);
    }
    if(s.size() == 1) cout << "Yes\n";
    else if(s.size() == 2) {
      int diff = 0;
      for(auto it : s) {
        diff = abs(diff - mp[it]);
      }
      if(diff == 1 or diff == 0) {
        cout << "Yes\n";
      }
      else cout << "No\n";
    }
    else cout << "No\n";
  } 
  return 0;
}