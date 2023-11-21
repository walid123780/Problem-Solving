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
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    long long ans = 0;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      ans += mp[v[i]];

      if(v[i] == 1) ans += mp[2];
      if(v[i] == 2) ans += mp[1]; 
      
      mp[v[i]]++;
    }
    cout << ans << endl;
  } 
  return 0;
}