#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
   int n, m; string s;
   cin >> n >> m >> s;
   std::vector<int> pos[2];
   
   pos[0].push_back(0);
   pos[1].push_back(0);

   for(int i = 0; i < n; i++) {
    pos[s[i] - '0'].push_back(i + 1);   
  } 

  pos[0].push_back(n + 1);
  pos[1].push_back(n + 1);
  set<pair<int, int>> ans;

  while(m--) {
    int l, r;
    cin >> l >> r;
    int first_1 = *lower_bound(pos[1].begin(), pos[1].end(), l);
    int last_0 = *(upper_bound(pos[0].begin(), pos[0].end(), r) - 1);
    if(first_1 < last_0) {
      ans.insert({first_1, last_0});
    }
    else ans.insert({inf, inf});
   }
   cout << ans.size() << endl;
 }
return 0;
}