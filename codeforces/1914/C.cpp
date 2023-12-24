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
    std::vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
      cin >> b[i];
    }
    int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
      pre[i] = pre[i - 1] + a[i];
    }
    int mx = 0, mx_e = 0, ans = 0;
    for(int i = 0; i < n; i++) {
      mx_e = max(mx_e, b[i]);
      if(k - i - 1 >= 0) ans = pre[i] + (mx_e * (k - i - 1));
      mx = max(mx, ans);
    }
    cout << mx << endl;
  } 
  return 0;
}