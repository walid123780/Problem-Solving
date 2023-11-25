#include <bits/stdc++.h>
using namespace std;

struct myComp {
  bool operator()(const pair<int, int> a, const pair<int, int> b) {
    if (a.second == b.second) return a.first > b.first;
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
    std::vector<int> a(n), b(n);
    std::vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i].first;
      v[i].second = i;
      b[i] = v[i].first;
    }
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    sort(v.begin(), v.end(), myComp());
    std::vector<int> ans(n);
   
    for(int i = k - 1, j = 0; i >= 0; i--, j++) {
      ans[v[j].second] = a[i];
    }
    for(int i = n - 1, j = k; i >= 0 and j < n; i--, j++) {
      ans[v[i].second] = a[j];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if(b[i] > ans[i]) {
        cnt++;
      }
    }
    if(cnt == k) {
      cout << "Yes\n";
      for(auto it : ans) {
        cout << it << " ";
      }
      cout << endl;
    }
    else {
      cout << "No\n";
    }
  } 
  return 0;
}