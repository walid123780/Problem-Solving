#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, q;
    cin >> n >> q;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   std::vector<int> vec;
   map<int, int> cnt;
   for(int i = 0; i < q; i++) {
    int x; cin >> x;
    if(cnt[x] == 0) vec.push_back(x); 
    cnt[x]++;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < vec.size(); j++) {
       int t = (1 << vec[j]);
       if(v[i] % t == 0) {
        v[i] |= (1 << (vec[j] - 1));
       }
     } 
  }
  for(auto it : v) {
    cout << it << " ";
  }
  cout << endl;
}
return 0;
}