#include <bits/stdc++.h>
using namespace std;

#define ll long long
long long lcm(long long a, long long b) {
   return (a / __gcd(a, b)) * b;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
    cin >> t;
    while(t--) {
     ll a , b;
     cin >> a >> b;
     if(lcm(a, b) == b) {
      cout << lcm(a, b) * (b / a) << endl;
     }
     else cout << lcm(a, b) << endl;
   }
  return 0;
}