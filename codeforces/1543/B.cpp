#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    long long n;
    cin >> n;
    std::vector<int> v(n);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> v[i]; sum += v[i];
    }
    long long rem = sum % n;
    cout << (n - rem) * rem << endl;
  }
}