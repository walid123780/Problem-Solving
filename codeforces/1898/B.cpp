#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
    ll last = v[n - 1];
    ll ans = 0;
    for(int i = n - 2; i >= 0; i--) {
      if(v[i] > last and last == 1){ 
        ans += v[i] - 1;
      }
      else if(v[i] > last and last > 1) {
        ans += ((v[i] - 1) / last);
        int space = (v[i] / last) + (v[i] % last ? 1 : 0); 
        last = v[i] / space;
        if(last == 0) last = 1;
      }
      else last = v[i];
    }
    cout << ans << endl; 
  } 
  return 0;
}