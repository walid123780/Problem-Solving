#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    std::vector<int> a(n), b(n);
    a[0] = m;
    for(int i = 1; i < n; i++) {
      cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
      cin >> b[i]; 
    }
    sort(a.begin(), a.end()), sort(b.begin(), b.end());
    int i = n - 1, j = n - 1;
    int ans = 0;
    while(i >= 0 and j >= 0) {
      if(b[j] <= a[i]) {
        i--;
        ans++;
      }
      else if(b[j] > a[i]) {
        i--;
        j--;
      }
    }
    cout << ans << endl;
  } 
  return 0;
}