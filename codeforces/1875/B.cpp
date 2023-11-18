#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m, k;
    cin >> n >> m >> k;
    std::vector<int> a(n), b(m);
    long long ans = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i]; ans += a[i];
    }
    for(int i = 0; i < m; i++) {
      cin >> b[i];
    }
    sort(a.begin(), a.end()), 
    sort(b.begin(), b.end());

    int a_mx = a[n - 1];
    int a_mn = a[0];

    int b_mx = b[m - 1];
    int b_mn = b[0];

    if(k % 2) {
      if(a_mn < b_mx) {
        ans -= a_mn;
        ans += b_mx;
      }
    }
    else if(!(k % 2)){
      if(a_mn < b_mx) {
        ans -= a_mn;
        ans += b_mx;
        ans += min(a_mn, b_mn); 
        ans -= max(a_mx, b_mx);
      }
      else {
        ans -= a_mx;
        ans += b_mn;
      }
    }
    cout << ans << endl; 
  }
  return 0;
}