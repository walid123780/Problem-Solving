#include <bits/stdc++.h>
using namespace std;

void solve() {
  string a, b;
  cin >> a >> b;
  if((a[0] == b[0])) {
    cout << "YES\n";
    cout << a[0] << "*\n";
    return;
  }
  else if(a[a.size() - 1] == b[b.size() - 1]) {
    cout << "YES\n";
    cout << "*" << a[a.size() - 1] << "\n";
    return;
  }
  
  for(int i = 0; i < a.size(); i++) {
    string temp;
    for(int j = i; j < a.size(); j++) {
      temp += a[j]; 
      if (temp.size() > 1 and b.find(temp) != string::npos) {
        cout << "YES\n";
        cout << "*" << temp << "*\n";
        return;
      } 
    }
  } 
  cout << "NO\n";
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}