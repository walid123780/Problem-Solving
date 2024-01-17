#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
   int n;
   cin >> n;
   std::vector<int> v(n);
   map<int, int> mp, mp1;
   set<int> st;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     st.insert(v[i]);
     mp[v[i]]++;
   }
   int mx_s = 0, ans;
   for(int s = 1; s <= N; s++) {
    int mx_p = 0;
    mp1 = mp;
    for(auto it : st) {
     int temp = s - it;
     if(it != temp) {
      int w = min(mp1[it] , mp1[temp]);
      mp1[it] -= w;
      mp1[temp] -= w;
      mx_p += w;
    }
    else {
      int w = mp1[it] / 2;
      mp1[it] = 0;
      mx_p += w;
    }
  }
  if(mx_s < mx_p) {
    mx_s = mx_p;
    ans = s;
   }
  }
  cout << mx_s << endl; 
}
return 0;
}