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
    string s;
    cin >> s;
    bool ok = false;
    for(int i = 0; i < n; i++) {
     if(s[i] == '0') ok = true;
   }
   if(ok) {
    cout << "Yes\n";
  }
  else cout << "No\n";

}
return 0;
}