#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int year = 2023;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
     cin >> t;
     while(t--) {
      int n, k;
      cin >> n >> k;
      std::vector<ll> v(n);
      ll sum = 1;
      for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum *= v[i];
      }
      if(floor((double) 2023 / sum) == ceil((double) 2023 / sum)) {
        cout << "Yes\n" << 2023 / sum << " "; k--;
        while(k--) {
          cout << 1 << " ";
        }
        cout << endl;
      } 
      else cout << "No\n";
    }  
  return 0;
}