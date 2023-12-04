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
     std::vector<string> v(n);
     for(int i = 0; i < n; i++) {
       cin >> v[i];
     }
     string ans;
     for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
          if(ans.empty() and v[j][i] == 'v') {
            ans += v[j][i];
            break;
          }  
          else if(ans.back() == 'v' and v[j][i] == 'i') {
            ans += v[j][i];
            break;
          }
          else if(ans.back() == 'i' and v[j][i] == 'k') {
            ans += v[j][i];
            break;
          }
          else if(ans.back() == 'k' and v[j][i] == 'a') {
            ans += v[j][i];
            break;
          }
        } 
     }
     if(ans == "vika") {
      cout << "Yes\n";
     }
     else {
      cout << "No\n";
     }
   }
  return 0;
}