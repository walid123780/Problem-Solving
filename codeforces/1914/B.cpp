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
        v[i] = i + 1;
      }
      int moves = n - k;
      sort(v.begin(), v.begin() + moves, greater<int>());
      for(auto it : v) {
        cout << it << " ";
      }
      cout << endl;
    } 
  return 0;
}