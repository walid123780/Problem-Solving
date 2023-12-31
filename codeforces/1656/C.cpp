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
    bool onease = false;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      if(v[i] == 1) onease = true;
    }
    sort(v.begin(), v.end());
    bool find = false;
    for(int i = 1; i < n; i++) {
      if(v[i - 1] + 1 == v[i]) {
        find = true;
      }
    }
    if(onease and find) {
      cout << "No\n";
    }
    else cout << "Yes\n";
  } 
  return 0;
}