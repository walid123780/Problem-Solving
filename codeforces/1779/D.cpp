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
    std::vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
      cin >> b[i]; 
    }
    int m;
    cin >> m;
    map<int, int> mp;
    std::vector<int> r(m);
    for(int i = 0; i < m; i++) {
      cin >> r[i];
      mp[r[i]]++;
    }  

    bool possiable = true;
    for(int i = 0; i < n; i++) {
      if(a[i] < b[i]) {
        possiable = false;
      } 
    }
    if(!possiable) {
      cout << "NO\n";
      continue;
    }

    stack<int> st;
    for(int i = 0; i < n; i++) {
      while(!st.empty() and st.top() < b[i]) {
        st.pop();
      }
      if(a[i] == b[i] or (!st.empty() and st.top() == b[i])) continue;

      if(mp[b[i]]) {
        st.push(b[i]);
        mp[b[i]]--;
        continue;
      }
      possiable = false;
    }
    if(!possiable) {
      cout << "NO\n";
    }
    else cout << "YES\n";
  }  
  return 0;
}