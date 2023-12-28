#include <bits/stdc++.h>
using namespace std;

int fx[] = {-1, 0, 1, 0};
int fy[] = {0, 1, 0, -1};
#define valid(rx,cy) rx>=0 && rx<3 && cy>=0 && cy<3
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    int n = 3;
    map<char, int> mp;
    for(int i = 0; i < 3; i++) {
     for(int j = 0; j < 3; j++) {
      mp[s[i][j]]++;
    } 
  }
  for(char i = 'A'; i <= 'C'; i++) {
    if(mp[i] == 2) {
      cout << i << endl;
      break;
    }
  }   
} 
return 0;
}