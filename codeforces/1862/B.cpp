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
   std::vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   std::vector<int> ans;
   ans.push_back(v[0]);
   for(int i = 1; i < n; i++) {
    if(ans.back() != 1) ans.push_back(1);
    ans.push_back(v[i]);
  } 
  cout << ans.size() << endl;
  for(auto it : ans) {
    cout << it << " ";
  }
  cout << endl;
}
return 0;
}