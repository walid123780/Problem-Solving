#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
   int n;
   cin >> n;
   std::vector<ll> v(n);
   int odd = 0, even = 0;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     odd += (v[i] % 2 == 1 ? 1 : 0);
     even += (v[i] % 2 == 0 ? 1 : 0);
   }
   if(odd and even) {
    cout << 2 << endl;
   }
   else {
    bool find = false;
    for(ll i = 0; i <= 60; i++) {
      ll p = (1LL << i);
      map<ll , ll> mp;
      for(int j = 0; j < n; j++) {
        mp[v[j] % p]++;
      }
      if(mp.size() == 2) {
        cout << p << endl;
        break;
      }
    }
   }
 }
 return 0;
}