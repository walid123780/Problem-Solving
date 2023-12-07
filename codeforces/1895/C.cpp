#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  map<int, int> mp[10];
  std::vector<string> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
    int sum = 0;
    for(auto ch : v[i]) {
      sum += (ch - '0');
    }
    mp[v[i].size()][sum]++;
  }

  long long ans = 0;
  for(int i = 0; i < n; i++) {
   string s = v[i];
   int cur = 0;
   for(auto ch : s) {
    cur += (ch - '0');
   } 

   ans += mp[s.size()][cur];
   
   int range_sum = 0;
   for(int j = 1; j < s.size(); j++) {
     range_sum += (s[j - 1] - '0');
     int need_sum = cur - (2 * range_sum);
     int need_range = s.size() - (2 * j);
     if(need_range > 0) ans += mp[need_range][need_sum];
   }
   range_sum = 0;
   for(int j = s.size() - 1; j > 0; j--) {
     range_sum += (s[j] - '0');
     int need_sum = cur - (2 * range_sum);
     int need_range = s.size() - 2 *(s.size() - j);
     if(need_range > 0 ) ans += mp[need_range][need_sum];
    } 
  }
  cout << ans << endl;
  return 0;
}