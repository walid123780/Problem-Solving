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
   long long sum = 0;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     sum += v[i];
   }
   sort(v.begin(), v.end());
   long long ans = (sum + 1) >> 1;
   int j = n - 1; sum /= 2;
   while(sum > 0) {
    ans += 1;
    sum -= v[j];
    j--;
   }
   cout << ans << endl;
 }
 return 0;
}