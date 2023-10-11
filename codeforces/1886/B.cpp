#include <bits/stdc++.h>
using namespace std;

double find (pair<int, int > x, pair<int, int> y) {
    return hypot(x.first - y.first, x.second - y.second);
}
void solve() {
    pair<int, int> p, a, b;
    cin >> p.first >> p.second;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    pair<int, int> o = {0 , 0};
    double ans = min({
        max (find(o, a), find(a, p)),
        max (find(o, b), find(b, p)),
        max ({find(o, a), find(b, p), find(a, b) / 2}),
        max ({find(o, b), find(a, p), find(b, a) / 2}),
    });
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    std::cout << std::fixed << std::setprecision(10);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}