#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;
int mex(vector<int> &arr, int N) {
  sort(arr.begin(), arr.end());
  int mex = 0;
  for (int idx = 0; idx < N; idx++) {
    if (arr[idx] == mex) {
      mex += 1;
    }
  }
  return mex;
}
void solve() {
    int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }
    int mx = mex(v , n);
  
   	while(true) {
   		cout << mx << endl;
   		cin >> mx;
   		if(mx < 0) break;
   	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}