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
   std::vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
  std::vector<int> temp = v;
  sort(v.begin(), v.end());
  if(v[0] == temp[0]) {
    cout << "Yes\n";
  }
  else cout << "NO\n";
 }
 return 0;
}