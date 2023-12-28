#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n) {
    long long squareRootN = (long long)round((sqrt(n)));
    if(squareRootN * squareRootN == n) {
        return true; 
    } else {
        return false; 
    }
}
#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
    cin >> t;
    while(t--) {
     int n;
     cin >> n;
     std::vector<int> v(n);
     ll sum = 0;
     for(int i = 0; i < n; i++) {
       cin >> v[i];
       sum += v[i];
     }
     if(isPerfectSquare(sum)) {
      cout << "Yes\n";
     }
     else  cout << "No\n";
   }
  return 0;
}