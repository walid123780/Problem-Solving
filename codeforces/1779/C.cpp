#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        int v[n + 69];
        for(int i = 1; i <= n; i++) {
            cin >> v[i];   
        }
        ll cur = 0 , ans = 0;
        multiset<int> s;
        for(int i = m; i >= 2; i--) {
            if(v[i] <= 0) {
                cur += v[i];
                continue;
            }
            cur += v[i];
            s.insert(v[i]);
            while(cur > 0) {
                ans += 1;
                auto it = s.end(); --it;
                cur -= 2 * (*it);
                s.erase(s.find(*it));
            }
        }
        s.clear();
        cur = 0;
        for(int i = m + 1; i <= n; i++) {
            if(v[i] >= 0) {
                cur += v[i];
                continue;
            }
            cur += v[i];
            s.insert(v[i]);
            while(cur < 0) {
                ans += 1;
                auto it = s.begin();
                cur -= 2 * (*it);
                s.erase(s.find(*it));
            }
        }
        cout << ans << endl;
    }
    return 0;
}