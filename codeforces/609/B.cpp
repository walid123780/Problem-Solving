#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    std::vector<int> v(n);
    map<int , int> mp;
    set<int > s;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	s.insert(v[i]);
    	mp[v[i]]++;
    }
    ll ans = 0 , xo = n;
    for(auto it : s) {
    	int f = (xo - mp[it]) * mp[it];
    	xo -= mp[it];
    	ans += f;
    }
    cout << ans << endl;
    return 0;
}