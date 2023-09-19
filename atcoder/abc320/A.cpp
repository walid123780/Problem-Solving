#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , m;
    cin >> n >> m;
    int a = pow(n, m);
    int b = pow(m, n);
    cout << a + b << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}