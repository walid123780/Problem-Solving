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
    if(n % 3 == 0) {
      cout << "Second\n";
    }
    else cout << "First\n";
  } 
  return 0;
}