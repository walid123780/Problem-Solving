#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int nn;
    cin >> nn;
    map<int, int> mp;
    for(int j = 0; j < nn; j++) {
      int n;
      cin >> n;
      for (int i = 2; i * i <= n; i++) {
       if (n % i == 0) {
         while (n % i == 0) {
           // cout << "fuck\n";
           mp[i]++;
           n /= i;
         }
       }
     }
     // cout << n << endl; 
     if (n > 1) mp[n]++;
   }
   bool ok = true; 
   for(auto it : mp) {
    // cout <<it.first << " " << it.second << "\n";
    if((it.second % nn) != 0) {
      ok = false;
      break;
    }
  }
  // cout << endl;
  if(ok) cout << "Yes " << endl;
  else cout << "No\n";
 } 
return 0;
}