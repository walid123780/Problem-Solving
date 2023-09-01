#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
void solve() {
    int n;
    cin >> n;
    std::vector<int> ind(n + 1 , 0);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ind[x] = (i + 1);
    }
    int prev_index = -1 , ans = 0;
    for(int i = 1; i <= n; i++) {
        if(prev_index < ind[i]) {
            prev_index = ind[i];
        }
        else{
            i--;
            prev_index = -1;
            ans += 1;
        }
    }
    cout << ans << "\n";
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