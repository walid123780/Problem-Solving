#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    int n = s.size();
    std::vector<pair<int, char>> C, S;
    for(int i = 0; i < n; i++) {
      if(s[i] == 'B') {
        if(!C.empty()) {
          C.pop_back();
        }
        continue;
      }
      if(s[i] == 'b') {
        if(!S.empty()) {
          S.pop_back();
        }
        continue;
      }
      if(s[i] >= 'A' and 'Z' >= s[i]) C.push_back({i, s[i]}); 
      if(s[i] >= 'a' and 'z' >= s[i]) S.push_back({i, s[i]}); 
    }
   
    std::vector<pair<int, char>> v;
    for(auto c : C) {
      v.push_back({c.first, c.second});
    }
    for(auto c : S) {
      v.push_back({c.first, c.second});
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
      cout << v[i].second; 
    }
    cout << endl;
  }
  return 0;
}