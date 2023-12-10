#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
    cin >> t;
    while(t--) {
     int a, b;
     cin >> a >> b;
     int dx[] = {a, b, b, a, -a, -b, -b, -a};
     int dy[] = {b, a, -a, -b, b, a, -a, -b};

     map<pair<int, int>, int> mp;

     int kx, ky;
     cin >> kx >> ky;

     for(int i = 0; i < 8; i++) {
       int n_x = kx + dx[i];
       int n_y = ky + dy[i];
       if(mp[{n_x, n_y}] == 0) mp[{n_x, n_y}]++;
     }
     int qx, qy;
     cin >> qx >> qy;

     for(int i = 0; i < 8; i++) {
       int n_x = qx + dx[i];
       int n_y = qy + dy[i];
       if(mp[{n_x, n_y}] == 1) mp[{n_x, n_y}]++;
       
     }
     int ans = 0;
     for(auto [i, j] : mp) {
      if(j == 2) {
        ans++;
      }
     }
     cout << ans << endl;
   }
  return 0;
}