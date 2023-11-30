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
      std::vector<int> v(n);
      for(int i = 0; i < n; i++) {
        cin >> v[i];
      }
      if(k > 1) {
        cout << "YES\n";
      }
      else if(is_sorted(v.begin(), v.end())) {
        cout << "YES\n";
      }
      else cout << "NO\n";
    } 
  return 0;
}