#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll inf = 1e18;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<pair<ll, int>> v;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v.push_back({x, i});
    }
    v.push_back({inf, n});
    sort(v.begin(), v.end());
    
    ll pre[n + 1];
    pre[0] = v[0].first;
    for (int i = 1; i <= n; i++) {
      pre[i] = pre[i - 1] + v[i].first;
    } 

    int l_i = 0, l_ans = 0;
    std::vector<int> ans(n);
    queue<int> q;
    while(l_i < n) {
      if(pre[l_i] < v[l_i + 1].first) {
        q.push(v[l_i].second);
        while(!q.empty()) {
          int pos = q.front();
          q.pop();
          ans[pos] = l_ans;
        }        
      }
      else {
        q.push(v[l_i].second);
      }
      l_ans++;
      l_i++;
    }
    for(auto it : ans) {
      cout << it << " ";
    }
    cout << endl;
  } 
  return 0;
}