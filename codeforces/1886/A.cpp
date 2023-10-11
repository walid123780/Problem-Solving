#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
 int n;
 cin >> n;
 for(int i = 1; i < 10; i++) {
    for(int j = i + 1; j < 10; j++) {
        int k = n - i - j;
        if(i % 3 != 0 and j % 3 != 0 and k % 3 != 0 and k > j) {
            cout << "YES\n";
            cout << i << " " << j << " " << k << endl;
            return;
        }

    }   
}
cout << "NO" << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}