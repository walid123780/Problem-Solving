#include <bits/stdc++.h>
using namespace std;

int n, m;
int kx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int ky[] = {+1, -1, 0, 0, -1, +1, +1, -1};
#define valid(rx,cy) rx >= 0 && rx < n && cy >= 0 && cy < m
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
   cin >> n >> m;
   int g[n][m];
   for(int i = 0; i < n; i++) {
     for(int j = 0; j < m; j++) {
      cin >> g[i][j];
     }
   }
   bool found = false;
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      int slot = 0;
      for(int k = 0; k < 4; k++) {
        int n_i = i + kx[k];
        int n_j = j + ky[k];
        if(valid (n_i, n_j)) {
          slot++;
        }
      }
      if(g[i][j] <= slot) {
        g[i][j] = slot;
      }
      else found = true;
    }
   }
   if(found) {
    cout << "NO\n";
   }
   else {
    cout << "YES\n";
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cout << g[i][j] << " ";
      }
      cout << endl;
    }
   }
 }
 return 0;
}