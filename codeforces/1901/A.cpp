#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, x;
   cin >> n >> x;
   std::vector<int> v;
   int mx = INT_MIN;
   v.push_back(0);
   for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v.push_back(a);
   }
   v.push_back(x);
   for(int i = 1; i < v.size(); i++) {
    int value;
    if(i + 1 == v.size()) {
      value = (v[i] - v[i - 1]) * 2;
    }
    else value = v[i] - v[i - 1];
     mx = max(mx , value);
   }
   cout << mx << endl;
 }
 return 0;
}