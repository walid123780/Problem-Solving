#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    ll a, b, n;
    cin >> a >> b >> n;
    std::vector<long long> v(n);
    ll sum = 0, loss = 0;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      v[i] = min(a, v[i]);
      sum += v[i];
      if(v[i] >= a) {
        loss ++;
      }
    }
    cout << (sum + b - loss) << endl;
  } 
  return 0;
}