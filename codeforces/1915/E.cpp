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
     map<ll, ll> mp;
     ll odd = 0, even = 0;
     bool find = false;
     for(int i = 0; i < n; i++) {
       cin >> v[i];
       if(i % 2) odd += v[i];
       else even += v[i];
       if(even == odd || mp.find(even - odd) != mp.end()) {
        find = true;
       }
       else mp[even - odd]++;
     }
     if(find) {
      cout << "Yes\n";
     }
     else cout << "No\n";
   }
  return 0;
}