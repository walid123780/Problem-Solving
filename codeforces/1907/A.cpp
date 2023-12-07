#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t; 
  while(t--){
    string s;
    cin >> s;
    for(char i = '1'; i <= '8'; i++){
      if(s[1]==i) continue;
      cout << s[0] << i << endl;
    }
    for(char i = 'a'; i <= 'h'; i++){
      if(s[0]==i) continue;
      cout << i << s[1] << endl;
    }
  }
  return 0;
}