#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    int n, m, p;
    cin >> n >> m >> p;
    std::vector<int> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    sort(a.begin(), a.end());
    std::vector<ll> pre(n + 1 , 0);
    for (int i = 1; i <= n; i++) {
       pre[i] = pre[i - 1] + a[i - 1];
   }
   long long ans = 0;
   for(int i = 0; i < m; i++) {
      int x; cin >> x;
      int index = upper_bound(a.begin(), a.end(),p - x) - a.begin() ;

      ans += pre[index] + 1LL * x * index;
      ans += 1LL * (n - index) * p;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}