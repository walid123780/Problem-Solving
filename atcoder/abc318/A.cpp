#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , m , k;
    cin >> n >> m >> k;
    int moves = 0;
    for(int i = m; i <= n; i += k) {
    	moves += 1;
    }
    cout << moves << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}