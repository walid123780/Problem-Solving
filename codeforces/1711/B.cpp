#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 69;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        std::vector<int> adj[n] , v(n) , degree(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];   
        }
        for(int i = 0; i < m; i++) {
            int u , v;
            cin >> u >> v;
            u-- , v--;
            adj[u].push_back(v); degree[u]++;
            adj[v].push_back(u); degree[v]++;
        }
        if(m % 2 == 0) {
            cout << 0 << endl;
        }
        else {
            int ans = INT_MAX;
            for(int i = 0 ; i < n ; i++) {
                if(degree[i] % 2) ans = min(ans, v[i]);
                for(auto j : adj[i]) {
                    if((degree[i] + degree[j]) % 2 == 0) {
                        ans = min (ans , v[i] + v[j]);
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
} // Identation check