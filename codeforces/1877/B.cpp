#include <bits/stdc++.h>
using namespace std;

#define ll long long
struct myComp {
    bool operator()(const pair<ll, ll> a, const pair<ll, ll> b) {
       if (a.second == b.second) return a.first > b.first;
       else return a.second < b.second;
   }
};
void solve() {
    long long n , k;
    cin >> n >> k;
    std::vector<pair<long long , long long>> v(n);
    for(long long i = 0; i < n; i++) {
        cin >> v[i].first;
    }
    for(long long i = 0; i < n; i++) {
        cin >> v[i].second;   
    }
    sort(v.begin(), v.end(), myComp());
    long long rem = n - 1;
    long long taka = k;
    for(int i = 0; i < n; i++) {
        taka += min(min(rem, v[i].first) * k, v[i].second * min(rem, v[i].first));
        rem -= v[i].first;rem = max(0LL , rem);
    }
    cout << taka << endl;
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