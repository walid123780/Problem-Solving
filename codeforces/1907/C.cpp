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
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < n; i++) {
      mp[s[i]]++; 
    }
    std::vector<int> v;
    for(char i = 'a'; i <= 'z'; i++) {
      if(mp[i]) v.push_back(mp[i]);
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    int pre[v.size()] = {0};
    pre[0] = v[0];
    for (int i = 1; i < v.size(); i++) {
      pre[i] = pre[i - 1] - v[i];
    }
    if(pre[v.size() - 1] < 0) {
      cout << (pre[v.size() - 1] % 2 ? 1 : 0) << endl;;
    }
    else cout << pre[v.size() - 1] << endl;
  } 
  return 0;
}