#include<bits/stdc++.h>
using namespace std;

int order_of_key(int j, std::vector<int> &v) {
  int cnt = 0;
  for(int i = j; i >= 0; i--) {
    if(v[j] > v[i]) {
      cnt++;
    }
  }
  return cnt;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n , m;
    cin >> n >> m; 
    std::vector<int> v(m);
    for(int i = 0; i < m; i++) {
      cin >> v[i];
    }
    int ans = 0;
    for(int i = 0; i < m; i++) {
     ans += order_of_key(i, v);
   }
   cout << ans << "\n";
 }
 return 0;
}