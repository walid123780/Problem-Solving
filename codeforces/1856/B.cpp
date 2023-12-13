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
   if(n == 1) {
    cout << "No\n";
    continue;
   }
   sort(v.begin(), v.end());
   long long cnt = 0, ase = 0;
   for(int i = 0; i < n; i++) {
    if(v[i] == 1) {
      cnt++;
    }
    ase += (v[i] - 1);
   }
   // cout << ase << " " << cnt << endl;
   if(ase >= cnt) {
    cout << "Yes\n";
   }
   else cout << "No\n";
 }
 return 0;
}