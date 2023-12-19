#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  map<int, int> mp;
  while(t--) {
    int w, v;
    cin >> w >> v;
    if(w == 1) {
      mp[v]++;
    }
    else  {
      bool hurry = false;
      for(int i = 29; i >= 0; i--) {
        int val = min(v >> i, mp[i]); 
        v -= val * (1 << i);
      }
      cout << (v == 0 ? "Yes" : "No") << endl;
    }
  } 
  return 0;
}