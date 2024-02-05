#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int j = n - 2, i = n - 1;
    while(j >= 0) {
      if(v[j] >= v[i]) {
        i--;
        j--;
      }
      else break;
    }
    while(j >= 0) {
      if(v[j] <= v[i]) {
        i--; j--;
      }
      else break;
    }
    cout << i << endl;
  } 
  return 0;
}