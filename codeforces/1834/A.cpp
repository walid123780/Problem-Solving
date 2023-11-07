#include <bits/stdc++.h>
using namespace std;

const int Max = 1e9;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]]++;
    }
    int ans = Max;
    ans = min({ans, mp[-1]}); int cnt = 0;
    while(mp[-1] > mp[1] or mp[-1] % 2) {
      mp[1]++;
      mp[-1]--;
      cnt += 1;
    }

    ans = min(ans, cnt);
    cout << ans << endl;
  }
}