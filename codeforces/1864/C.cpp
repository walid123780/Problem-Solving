#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;
    int bit = -1;
    int N = n;
    std::vector<int> ans;
    for(int i = 0; i < 30; i++) {
        if(n >> i & 1) {
            bit = i;
            if((1 << i) == n) break;
            ans.push_back(1 << i);
            n -= (1 << i);
        }
    }
    for(int i = bit  - 1; i >= 0; i--) {
        ans.push_back(1 << i);
    }
    cout << ans.size() + 1 << "\n";
    cout << N << " ";
    for(auto it : ans) {
        N -= it;
        cout << N << " ";
    }
    cout << "\n";
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