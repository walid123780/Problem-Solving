#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;  
    if(count(s.begin(), s.end(), '0') != count(s.begin(), s.end(), '1')) {
      cout << "-1\n";
      continue;
    }
    int l = 0, r = n - 1; 
    std::vector<int> list;
    while(l < r) {
      if(s[l] == s[r]) {
        if(s[l] == '0') {
          s.insert(r + 1, "01");
          list.push_back(r + 1);
          r += 2;
        }
        else if(s[l] == '1') {
          s.insert(l, "01");
          list.push_back(l);
          r += 2; 
        }
      }
      l++;
      r--;
    }
    cout << list.size() << "\n";
    for(auto it : list) {
      cout << it << ' ';
    }
    cout << endl;
  } 
  return 0;
}