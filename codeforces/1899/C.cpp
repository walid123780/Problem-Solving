#include <bits/stdc++.h>
using namespace std;

#define ll long long
int find (vector<int> &v, int l, int r) {
  int ans = INT_MIN, sum = 0;
  for( int i = l; i < r ; i++ ){
    // cout << v[i] << " ";
    sum += v[i];
    ans = max(sum, ans);
    if(sum < 0) sum = 0;

  }
  return ans;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      ans = max(ans, v[i]);

    }
    int sum = v[0], pre_mx = v[0];
    int j = 0;
    // cout << "1" << endl;
    for(int i = 1; i < n; i++) {
      if((abs(v[i - 1]) % 2) == (abs(v[i]) % 2)) {
        int get = find(v, j, i);
        ans = max(ans, get);
        j = i; sum = v[i], pre_mx = v[i];
      } 
      // else {
      //   sum += v[i];
      //   pre_mx = max(pre_mx, sum);
      // }
    }
    int get = find(v, j, n);
    ans = max(ans , get);
    cout << ans  << endl;
  } 
  return 0;
}