#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>&a, const pair<int, int>&b) {
 return a.second < b.second;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    char grid[n + 1][n + 1];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin >> grid[i][j];
      }
    }      
    int ans = 0;
    for(int i = 0; i < n / 2; i++){
      for(int j = 0; j < n / 2 ; j++){
        std::vector<int> v;
        v.push_back(grid[i][j] - 'a');
        v.push_back(grid[j][n - 1 - i] - 'a');
        v.push_back(grid[n - j - 1][i] - 'a');
        v.push_back(grid[n - i - 1][n - j - 1] - 'a');
        sort(v.begin(), v.end());
        // cout << endl;
        int val = v.back();
        for(int i = 0; i < v.size() ; i++) {
          ans += (val - v[i]);
        }
      }
    }
    cout << ans << endl;
  } 
  return 0;
}