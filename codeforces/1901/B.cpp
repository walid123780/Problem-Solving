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
    std::vector<int> v;
    v.push_back(1);
    for(int i = 0; i < n; i++) {
      int x; cin >> x;
      v.push_back(x);
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++) {
      if(v[i - 1] < v[i]) {
        ans += (v[i] - v[i - 1]);
      }
    }
    cout << ans << endl;
  } 
  return 0;
}