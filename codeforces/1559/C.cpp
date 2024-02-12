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
   bool ok =  false;
   for(int i = 0; i < n; i++) {
    if(v[i] == 1 and !ok) {
      cout << n + 1 << " ";
      ok = true;
    }
    cout << i + 1 << " ";
   }   
   if(!ok) {
    cout << n + 1;
   }
   cout << "\n";
 }
 return 0;
}