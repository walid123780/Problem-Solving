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
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(auto it : s) {
      if(it == '+') a++;
      else b++;
    }
    cout << abs(a - b) << endl;
  } 
  return 0;
}