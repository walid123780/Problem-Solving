#include<bits/stdc++.h>
using namespace std;

using i64 = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin >> n >> m;
        std::vector<int> f(n + m);
        std::vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
            a[i]--;
            f[a[i]] += m + 1;
        }
        for(int i = 0; i < m ;i++){
            int p , v;
            cin >> p >> v; 
            p-- , v--;
            f[a[p]] -= m - i;
            a[p] = v;
            f[a[p]] += m - i;
        }

        i64 ans = 1LL * m * ( m + 1 ) * n ;
        for(int i = 0; i < n + m; i++){
            ans -= 1LL * f[i] * (f[i] - 1) / 2;
        }
        cout<< ans << endl;
    }
    return 0;
}