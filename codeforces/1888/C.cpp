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
    map<int, int> mp;
    map<int, bool> check;
    int ase = 0;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]]++;
      check[v[i]] = false;
      if(mp[v[i]] == 1) {
        ase++;
      }
    }
    long long ans = 0;
    for(int i = 0; i < n; i++) {
      if(check[v[i]]) {
        mp[v[i]]--;
        if(!mp[v[i]]) {
          ase--;
        }
        continue;
      }
      check[v[i]] = true;

      ans += ase;

      mp[v[i]]--;
      if(!mp[v[i]]) ase--; 
    }
    cout << ans << endl;
  } 
  return 0;
}