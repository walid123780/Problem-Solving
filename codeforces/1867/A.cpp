#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        std::vector<int> v(n);
        std::vector<pair<int , int >> frq;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            frq.push_back({v[i], i});
        }
        sort(frq.begin(), frq.end());
        std::vector<int> ans(n);
        for(int i = 0 , _ = n; i < n; i++, _--) {
           ans[frq[i].second] = _;
        }
        for(auto it : ans) {
            cout << it << " "; 
        }
        cout << "\n";
    }
    return 0;
}