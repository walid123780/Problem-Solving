#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll inf = 1e18;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<long long> v(n + 1);
    for(int i = 1; i <= n; i++) {
      cin >> v[i];
    }
    ll pre[n + 1];
    pre[0] = 0;
    pre[1] = v[1];
    for (int i = 2; i <= n; i++) {
      pre[i] = pre[i - 1] + v[i];
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++) {
      long long sum = 0, mx = -inf, mn = inf;
      if(n % i != 0) continue;
      for(int j = i; j <= n; j += i) {
        //cout << j << " ";
        sum = pre[j] - pre[j - i];
        mx = max(mx, sum);
        mn = min(mn, sum);
      }
      //cout << abs(mx - mn) << endl;
      ans = max(ans, abs(mx - mn));
    }
    cout << ans << "\n";
  } 
  return 0;
}