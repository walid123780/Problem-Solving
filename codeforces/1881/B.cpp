#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
     cin >> t;
     while(t--) {
      std::vector<int> v(3);
      cin >> v[0] >> v[1] >> v[2];
      sort(v.begin(), v.end());
      int a = v[0], cost = 0;
      while(v[1] > a and cost <= 3) {
        a += v[0];
        cost++;
      }
      if(a != v[1]) {
        cost = 100;
      }
      a = v[0];
      while(v[2] > a and cost <= 3) {
        a += v[0];
        cost++;
      }
      if(a != v[2]) {
        cost += 200;
      }
      if(cost <= 3) {
        cout << "Yes\n";
      }
      else cout << "No\n";
    } 
  return 0;
}