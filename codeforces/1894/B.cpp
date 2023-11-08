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
   map<int, int> mp, mp1;
   std::vector<int> ans(n, 1); int last = 0;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     mp[v[i]]++;
     if(mp[v[i]] == 2 and (last & 1)) {
      ans[i] = 2;
      ans[mp1[v[i]]] = 1;
      last++;
     }
     else if(mp[v[i]] == 2 and !(last & 1)) {
      ans[i] = 3;
      ans[mp1[v[i]]] = 1;
      last++;
     }
     mp1[v[i]] = i;

   }
   int cnt = 0; 
   for(auto it : mp) {
    cnt += (it.second >= 2 ? 1 : 0);
   }      
   if(cnt < 2) {cout << -1 << endl; continue;} 
   for(int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
   cout << endl;
 }  
 return 0;
}