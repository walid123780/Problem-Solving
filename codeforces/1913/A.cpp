#include <bits/stdc++.h>
using namespace std;

int convert_to_decimal(string s , int base) {
  int n = 0 , power = 1;
  for(int i = (int) s.size() - 1; i >= 0 ; i--) {
    n += power * (s[i] - '0');
    power *=  base;
  }
  return n;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    bool ok = false;
    string a, b;
    for(int j = 0; j < s.size(); j++) {
      if(s[j]!= '0' and j) {
        b = s.substr(j);
        break;
      }
      a += s[j];
    }
    int aa = convert_to_decimal(a, 10);
    int bb = convert_to_decimal(b, 10);
    if(aa >= bb) {
      cout << -1 << endl;
    }
    else cout << a << " " << b << endl; 
  }  
  return 0;
}