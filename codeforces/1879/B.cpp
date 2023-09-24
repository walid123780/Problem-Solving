#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    std::vector<int> a(n) , b(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
    	cin >> b[i];	
    }
    sort(a.begin(), a.end());
    long long sum = 0 , sum2= 0;
    for(int i = 0; i < n; i++) {
    	sum += (a[0] + b[i]);
    }
    //cout << sum << endl;
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++) {
    	sum2 += (b[0] + a[i]);
    }
   // cout << sum2 << endl;
    cout << min(sum , sum2) << endl;
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