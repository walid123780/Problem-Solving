#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    ll ans = 0;
    unordered_set<char>se;
    for(auto it : s) {
      se.insert(it);
      ans += se.size();
    }
    cout << ans << endl;
  } 
  return 0;
}