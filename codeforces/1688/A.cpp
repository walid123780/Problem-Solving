#include <bits/stdc++.h>
using namespace std;

string convert_base(int n) {
  int binarynum[65];
  int i = 0;
  while (n > 0) {
    binarynum[i] = n % 2;
    n = n / 2;
    i++;
  }
  string s = "";
  for (int j = i - 1; j >= 0; j--)
    s += binarynum[j] + '0';
  return s;
}
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
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x; 
    string s = convert_base(x);
    string ans = "";
    //cout << s << endl;
    for(int j = s.size() - 1; j >= 0; j--) {
      if(s[j] == '0') {
        ans += '0';
      }
      else {
        ans = '1' + ans;
        break;
      }
    }  
    if(ans == s) {
      int f = false;
      for(int j = ans.size() - 1; j > 0; j++) {
        if(ans[j] == '0') {
          ans[j] = '1';
          f = true;
          break;
        }
      }
      if(!f) ans += '1';
    }
    cout << convert_to_decimal(ans, 2) << endl;
  }     
}