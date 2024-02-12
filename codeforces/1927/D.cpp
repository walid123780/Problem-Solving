#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9, LIMIT = 1e6 + 9;
int a[N];
std::vector<int> pos[LIMIT];
struct ST {
  int tree_mx[4 * N];
  static const int inf = 1e9;
  ST() {
    memset(tree_mx, 0, sizeof tree_mx);
  }
  void build(int n, int b, int e) {
    if (b == e) {
      tree_mx[n] = a[b];
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    tree_mx[n] = max(tree_mx[l], tree_mx[r]); // change this
  }
  int query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return -inf; // return appropriate value
    if (b >= i && e <= j) return tree_mx[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
  }
}tree_mx;

struct ST1 {
  int tree_mn[4 * N];
  static const int inf = 1e9;
  ST1() {
    memset(tree_mn, 0, sizeof tree_mn);
  }
  void build(int n, int b, int e) {
    if (b == e) {
      tree_mn[n] = a[b];
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    tree_mn[n] = min(tree_mn[l], tree_mn[r]); // change this
  }
  int query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return inf; // return appropriate value
    if (b >= i && e <= j) return tree_mn[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
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
     for(int i = 1; i <= n; i++) {
       pos[a[i]].clear();
     }
     for(int i = 1; i <= n; i++) {
       pos[a[i]].push_back(i);
     }
     tree_mn.build(1, 1, n);
     tree_mx.build(1, 1, n);
     int query;
     cin >> query;
     while(query--) {
      int l, r;
      cin >> l >> r;
      int mn = tree_mn.query(1, 1, n, l, r);
      int mx = tree_mx.query(1, 1, n, l, r);
     
      if(mn == mx) {
        cout << -1 << " " << -1 << endl;
      }
      else {
        int i = lower_bound(pos[mn].begin(), pos[mn].end(), l) - pos[mn].begin();
        int j = lower_bound(pos[mx].begin(), pos[mx].end(), l) - pos[mx].begin();
        cout << pos[mn][i] << " " << pos[mx][j] << endl;
      }
     }
     cout << "\n";
   }
  return 0;
}


