#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m , k;
    cin >> n >> m >> k;
    std::vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
       cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a[0] < b[m - 1]) {
      swap(a[0], b[m - 1]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(k % 2 == 0) {
      if(b[0] < a[n - 1]) {
        swap(b[0], a[n - 1]);
      }
    }
    long long ans = 0;
    for(int i = 0; i < n; i++) {
      ans += a[i];
    }
    cout << ans << endl;
  } 
  return 0;
}