#include <bits/stdc++.h>
using namespace std;

struct myComp {
  bool operator()(const pair<int, int> a, const pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
  }
};
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    std::vector<pair<int, int>> v;
    std::vector<int> ans;
    for(int i = 0; i < n; i++) {
      int x; cin >> x; 
      x %= k;
      if(x == 0) ans.push_back(i + 1);
      v.push_back({x, i + 1});
    }
    sort(v.begin(), v.end(), myComp());
    for(auto it : v) {
      if(it.first) {
        ans.push_back(it.second);
      }
    }
    for(auto it : ans) {
      cout << it << " ";
    }
    cout << endl;
  } 
  return 0;
}