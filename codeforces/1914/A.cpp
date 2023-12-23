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
    string s;
    cin >> s;
    map<char, int> mp;
    for(int i = 0; i < n; i++) {
      mp[s[i]]++;
    }      
    int i = 1, ans = 0;
    for(char ch = 'A'; ch <= 'Z'; ch++, i++) {
      if(mp[ch] >= i) {
        ans++;
      }
    }
    cout << ans << endl;
  } 
  return 0;
}