#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
    cin >> t;
    while(t--) {
     int n;
     cin >> n;
     std::vector<int> v(n);
     ll prod = 1;
     int pos = 0, ne = 0, z = 0;
     for(int i = 0; i < n; i++) {
       cin >> v[i];
       if(v[i] == 0) z++;
       else if(v[i] < 0) ne++;
       else pos++;
     }
     if(z != 0) {
      cout << 0 << endl;
     }
     else if(ne % 2 != 0) {
      cout << 0 << endl;
     }
     else {
      cout << "1\n1 0\n";
     }
   }
  return 0;
}