#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;
   std::vector<int> v(n) , a(n);

   for(int i = 0; i < n; i++) {
    cin >> v[i];
    a[i] = i + 1;
   }
   int ans = n, x = 0;
   for(int i = 0; i < n; i++) {
    if(v[i] == (a[i] + x )) {
        x++;

    }
   }
    cout << ans + x << endl;
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
