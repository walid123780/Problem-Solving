#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int a, b, c;
    cin >> a >> b >> c;
    map<int, int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    int ans = -1;
    for(int i = 0; i < 10; i++) {
      if(mp[i] == 1) {
        ans = i;
        break;
      }
    }      
    cout << ans << endl;
  } 
  return 0;
}