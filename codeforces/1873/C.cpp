#include <bits/stdc++.h>
using namespace std;

int x[10][10];
void solve() {
    int res = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            char c;
            cin >> c;
            if(c=='X') {
                res += x[i][j];
            }
        }
    }
    cout << res << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 0; i < 5; i++) {
        for(int j = i; j < 10 - i; j++) {
            for(int k = i; k < 10 - i; k++) {
                x[j][k] = i + 1;
            }
        }
    }
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}