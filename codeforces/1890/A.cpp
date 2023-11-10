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
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      int x; cin >> x;
      mp[x] ++;
    }
    if(mp.size() > 2) cout << "No\n";
    else if(abs(mp.begin()->second - mp.rbegin()->second) <= 1) {
      cout << "Yes" << endl; 
    }
    else cout << "No\n";
  } 
  return 0;
}