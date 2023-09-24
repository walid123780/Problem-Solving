#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    ll n;
    cin >> n;
    std::vector<ll> v(n);
   	for(int i = 0; i < n; i++) {
   		cin >> v[i];	
   	}
    sort(v.begin(), v.end());
    long long mn = v[0], x = 0;
    long long mx = v[n - 1], y = 0;
    for(int i = 0; i < n; i++) {
    	if(mn == v[i]) x++;
    	else if(mx == v[i]) y++;
    }

    cout << mx - mn << " ";
    if(mx == mn) cout << (n) * (n - 1) / 2;
    else cout << (x * y) << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

}