#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n , q;
        cin >> n >> q;

        std::vector<int > v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];   
        }
        vector < ll > pre(n + 1);
        for(int i = 0; i < n; i++){
            pre[i + 1] = pre[i] + v[i];   
        }
        while(q--){
            int l  , r , k;
            cin >> l >> r >> k;
            l--;
            ll sum = pre[l] + pre[n] - pre[r] + (k * (r - l));
            cout << (sum % 2 ? "YES" : "NO") << endl;
        }
    }
}