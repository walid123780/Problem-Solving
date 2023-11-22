#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    std::vector<int> temp = v;
    sort(temp.begin(), temp.end());
    int sm = temp[0];
    
    for(int i = 0; i < n; i++) {
      if(v[i] == sm) {
        for(int j = i + 1; j < n; j++) {
          if(v[j - 1] > v[j]) {
            cout << "-1\n";
            return;
          }
        }
        cout << i << endl;
        return;
      } 
    }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}