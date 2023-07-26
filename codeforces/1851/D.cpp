#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve () {
    ll n;
    cin >> n;
    std::vector<ll> v(n , 0);
    map<ll , int > mp;
    for(int i = 1; i < n; i++) {
        cin >> v[i];
        mp[v[i] - v[i - 1]]++;
    }
    int cnt = 0; ll sum = 0;
    for(int i = 1; i <= n; i++) {
        if(!mp[i]) cnt += 1 , sum += i;
        else mp[i] -= 1; 
    }    
    if (cnt == 1 and mp[sum] == 0) cout << "YES" << endl;
    else if (cnt == 2 and mp[sum] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}