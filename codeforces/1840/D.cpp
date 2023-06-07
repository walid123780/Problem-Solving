#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long MAX = 1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        std::vector<int> v(n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];   
        }
        sort(v.begin(), v.end());
        // for(auto it : v) {
        //     cout << it << " ";
        // }
        // cout << endl;
        long long l = 0 , r = MAX , ans = MAX;
        while(l <= r) {
            ll mid = (l + r) >> 1;
            int cnt = 0 , x = mid + v[0];

            std::vector<int> f;
            f.push_back(v[0]);
            for(int i = 1; i < n; i++) {
                if(abs(v[i] - x) > mid) {
                     x = mid + v[i];
                     f.push_back(v[i]);
                     cnt++;
                }
            }
            if(cnt < 3) {
                // cout << "MID # : " << mid << " ";
                // for(auto it : f) {
                //     cout << it << " ";
                // }
                // cout << endl;
                ans = min(mid , ans);
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}