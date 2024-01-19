#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll operation_2 (ll n){
  ll sum = 0;
  for (ll i = 2; i * i <= n; i++) {
    if(n % i == 0) {
      return i;
    }
  }
  return n;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); 
  long long n;
  cin >> n;
  ll ans = 0, also = 0;
  if(n % 2 != 0) {
    n -= operation_2(n);
    also++;
  }  
  cout << (n / 2) + also << endl;
  return 0;
}