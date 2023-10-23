#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int dp[N][5];
int n, a[N], b[N], c[N];

int solve(int day, int last) {
    if(day > n) return 0;
    if(dp[day][last] != -1) return dp[day][last];

    int ans = 0;
    for(int j = 1; j <= 3; j++) {
        if(j != last and j == 1) {
            ans = max(ans, solve(day + 1, j) + a[day]);
        }
        if(j != last and j == 2) {
            ans = max(ans, solve(day + 1, j) + b[day]);
        }
        if(j != last and j == 3) {
            ans = max(ans, solve(day + 1, j) + c[day]);
        }
    }
    return dp[day][last] = ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    memset(dp, -1, sizeof dp);
    cout << solve(1, 0) << endl;
    return 0;
}