#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9, N = 2e5 + 7;
int n, k, v[N];

int bs(int x){
  int l = 1, r = n; 
  while(l <= r) {
    int mid = l + r >> 1;
    if(v[mid] <= x) l = mid + 1;
    else r = mid - 1;
  }
  return r;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  for(int i = 1; i <= n; i++) {
    cin >> v[i];
  } 
  sort(v + 1, v + n + 1);
  int l = 1, r = inf;
  while(l <= r) {
    int mid = l + r >> 1 ;
    int pos = bs(mid);
    if(pos > k) {
      r = mid - 1;
    }
    else l = mid + 1;
  } 
  if(r >= 1 and r <= inf and bs(r) == k) {
    cout << r << endl;
  }
  else cout << -1 << endl;
  return 0;
}