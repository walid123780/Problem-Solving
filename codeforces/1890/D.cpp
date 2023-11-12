#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, c;
    cin >> n >> c;
    std::vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) {
      cin >> v[i];
    }
    ll sum = v[1], pre = v[1];
    bool can = false;
    for(int i = 2; i <= n; i++) {
      sum += v[i];
      if((pre + v[i]) >= (i * 1LL * c)) {
        pre = sum;
        if(i == n) {
          can = true;
        }
      }
    }
    if(can) {
      cout << "Yes\n";
    }
    else cout << "No\n";
  }  
  return 0;
}