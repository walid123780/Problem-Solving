#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];
struct ST {
  pair<int, int> tree_mx[4 * N];
  static const int inf = 1e9;
  ST() {
    memset(tree_mx, 0, sizeof tree_mx);
  }
  void build(int n, int b, int e) {
    if (b == e) {
      tree_mx[n] = make_pair(a[b], b);
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    tree_mx[n] = max(tree_mx[l], tree_mx[r]);
  }
  pair<int, int> query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return {-inf, -inf};
    if (b >= i && e <= j) return tree_mx[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
  }
}tree_mx;

struct STAR {
  pair<int, int> tree_mn[4 * N];
  static const int inf = 1e9;
  STAR() {
    memset(tree_mn, 0, sizeof tree_mn);
  }
  void build(int n, int b, int e) {
    if (b == e) {
      tree_mn[n] = make_pair(a[b], b);
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    tree_mn[n] = min(tree_mn[l], tree_mn[r]); 
  }
  pair<int, int> query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return {inf, inf}; 
    if (b >= i && e <= j) return tree_mn[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
  }
}tree_mn;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
    cin >> t;
    while(t--) {
     int n;
     cin >> n;
     for(int i = 1; i <= n; i++) {
       cin >> a[i];
     }
     tree_mn.build(1, 1, n);
     tree_mx.build(1, 1, n);
     int query;
     cin >> query;
     while(query--) {
      int l, r;
      cin >> l >> r;
      pair<int, int> mn = tree_mn.query(1, 1, n, l, r);
      pair<int, int> mx = tree_mx.query(1, 1, n, l, r);
     
      if(mn.first == mx.first) {
        cout << -1 << " " << -1 << endl;
      }
      else {
        cout << mn.second << " " << mx.second << endl;
      }
     }
     cout << "\n";
   }
  return 0;
}