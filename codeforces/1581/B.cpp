#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    long long n, m, k;
    cin >> n >> m >> k;
    int diameter = k - 2; // maximum distance between any nodes
    long long mx_edges = (n * (n - 1LL)) / 2;
    int mn_edges = n - 1;
    //cout << mx_edges << " " << mn_edges << endl; 
    if(m < mn_edges or m > mx_edges) {
      cout << "NO\n";
    }
    else if(n == 1 and diameter >= 0) {
      cout << "YES\n";
    }
    else if(m < mx_edges and diameter >= 2) {
      cout << "YES\n";
    }
    else if(mx_edges == m and diameter >= 1) {
      cout << "YES\n"; 
    }
    else cout << "NO\n"; 
  }     
}