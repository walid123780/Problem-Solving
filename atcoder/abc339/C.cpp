#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 9;
long long pre[N];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  ll balance= 0, ans = 0; 
  std::vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
    balance += v[i];
    if(balance < 0) {
      ans += (0 - balance);
      balance = 0;
    }
  }
  pre[0] = v[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + v[i];
  }
  cout << pre[n - 1] + ans  << endl;
  return 0;
}