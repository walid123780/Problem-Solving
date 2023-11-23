#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  map<string, int> mp;
  for(int i = 1; i < n; i++) {
    string t;
    t = s[i - 1];
    t += s[i];
    mp[t]++;
  } 
  auto pr = std::max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
    return x.second < y.second;
  });

  std::cout << pr->first << std::endl;
  return 0;
}