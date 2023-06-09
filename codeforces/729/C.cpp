#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k, s, t;
std::vector<pair< ll , ll >> v;
std::vector<int> st;
const ll N = 2e9 + 69;
bool can (ll mid) {
    ll time = 0;
    for(int i = 1; i < k + 2; i++) {
        ll temp = st[i] - st[i - 1];
        if(temp > mid) {
            return false;
        }
        if(2 * temp <= mid) time += temp;
        else time = time + 2 * temp - (mid - temp);
    }
    if(time <= t) return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> k >> s >> t;
    for(int i = 0; i < n; i++) {
        ll x , y;     
        cin >> x >> y;
        v.push_back({x , y});
    }
    st.push_back(0);
    for(int i = 1; i <= k; i++) {
        ll x;
        cin >> x;
        st.push_back(x);
    }
    st.push_back(s);
    sort(st.begin(), st.end());
    ll l = 0 ,r = N;
    while(l <= r) {
        ll mid = (l + r) >> 1;
        if(can(mid)) {
            r = mid - 1;
        }
        else l = mid + 1;
    }
    ll ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(v[i].second < l) {
            continue;
        }   
        ans = min (ans , v[i].first);
    }
    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
    
    return 0;
}