#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int range = 1e6 + 7;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    ll n;
    cin >> n;
    std::vector<int> list;
    for(int i = 1; i * i <= range; i++) {
      if(n % i == 0) {
        list.push_back(i); 
      }
    }
    n = list.size(); int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
      int cnt = 1;
      while(i < n - 1 and list[i] + 1 == list[i + 1]) {
        cnt++;
        i++;
      }
      ans = max(ans, cnt);
    }
    cout << ans << endl;
  } 
  return 0;
}