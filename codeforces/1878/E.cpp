#include <bits/stdc++.h>
using namespace std;

const int  N = 3e5 + 9; int a[N];int t[4 * N];

int merge(int l, int r) {
  int ans = l & r;  // change this
  return ans;
}
void build(int n, int b, int e) {
    if (b == e) {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l] , t[r]); 
}
int query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return -1;// return appropriate value
    if (b >= i && e <= j) return t[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return merge(query(l, b, mid, i, j) , query(r, mid + 1, e, i, j));
  }

  void solve() {
      int n;
      cin >> n;
      for(int i = 1; i <= n; i++) {
          cin >> a[i];    
      }
      build(1, 1, n); 
      int q;
      cin >> q;
      while(q--) {
          int l , v;
          cin >> l >> v;
          int lo = l, r = n, ans = -1;
          while(lo <= r) {
              int mid = (lo + r) / 2;
              if(query(1, 1, n, l, mid) >= v) {
                  lo= mid + 1;
                  ans = mid;
              }
              else r = mid - 1;
          }
          cout << ans << " ";
      }
      cout << "\n";
  }

  int main() {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
      int tc = 1;
      cin >> tc;
      while (tc--) {
          solve();
      }
  }