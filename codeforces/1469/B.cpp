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
    std::vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int m;
    cin >> m; 
    std::vector<int> b(m);
    for(int i = 0; i < m; i++) {
      cin >> b[i];
    }
    int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
      pre[i] = pre[i - 1] + a[i];
    }
    int pre1[m];
    pre1[0] = b[0];
    for (int i = 1; i < m; i++) {
      pre1[i] = pre1[i - 1] + b[i];
    }
    int ans = 0, mx1 = 0, mx2 = 0;
    for(int i = 0; i < n; i++) {
      mx1 = max(mx1 , pre[i]); 
    }
    for(int i = 0; i < m; i++) {
      mx2 = max(mx2, pre1[i]);
    }
    //cout << mx1 << " " << mx2 << endl;
    ans = max(ans, mx1+ mx2);
    cout << ans << endl;
  }
  return 0;
}