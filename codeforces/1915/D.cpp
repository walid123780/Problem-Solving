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
     std::vector<string> v;
     string t;
     for(int i = 0; i < n; i++) {
      if(s[i] == 'a' || s[i] == 'e' ) {
        t += s[i];
        v.push_back(t);
        t = "";
      } 
      else t += s[i];
     }
     if(t.size() != 0) {
      v.push_back(t);
     }
     std::vector<string> ans;
     for(auto it : v) {
       if(it.size() == 3) {
        if(it[1] == 'a' || it[1] == 'e') {
          ans.push_back(it);
          continue;
        }
        else {
          string temp = ans.back(), temp1;
          temp1 = it[1];
          temp1 += it[2];
          ans.pop_back();
          temp += it[0];

          ans.push_back(temp);
          ans.push_back(temp1);

          continue;
        }
       }
       else if(it.size() == 1) {

         string temp = ans.back();
          
          ans.pop_back();
          temp += it[0];

          ans.push_back(temp);

          continue;
       }
       ans.push_back(it);
     }
     for(int i = 0; i < ans.size() - 1; i++) {
       cout << ans[i] << ".";
     }
     cout << ans.back() << endl;
   }
  return 0;
}