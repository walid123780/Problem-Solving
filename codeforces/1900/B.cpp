#include <bits/stdc++.h>
using namespace std;
double find(int a) {
  return (double) a/ (double) 2;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b and a == c) {
      cout << "1 1 1\n";
      continue;
    }
    std::vector<int> v = {a, b, c}, ans(3);
    for(int j = 0; j < 3; j++) {
      int sum = 0; 
      for(int i = 0; i < 3; i++) {
        if(j == i) continue;
        sum += v[i];
      }
      double x = find(sum);
      if(ceil(x) == floor(x)) {
        ans[j] = 1;
      }
    }
    for(auto it : ans) {
      cout << it << " ";
    }
    cout << endl;
  } 
  return 0;
}