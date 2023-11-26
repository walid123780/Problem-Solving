#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
   int n; cin >> n;
   string s; cin >> s;
   int mx = INT_MIN;
   int cnt = 0, ok = 0;
   for(int i = 0; i < n; i++) {
      if(s[i] == '.') {
        cnt++;
        ok = 0;
        int j = i;
        while(s[j] != '#' and j < n) {
          ok++;
          j++;
        }
        mx = max(mx, ok);
      }
   }
   // cout << ok << endl;
   if(mx >= 3) {
    cout << 2 << endl;
   }     
   else cout << cnt << endl;
 }
 return 0;
}