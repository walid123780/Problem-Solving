#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n) {
  int sum = 0;
  while (n != 0) {
    sum = sum + n % 10;
    n = n / 10;
  }
  return sum;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    int ans;
    for(int i = n; ; i++) {
      int d_sum = digit_sum(i);
      if(d_sum % k == 0) {
        ans = i;
        break;
      }
    }
    cout << ans << endl;
  } 
  return 0;
}