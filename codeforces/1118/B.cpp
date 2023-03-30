#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
        // cin>>t;
    while(t--){
        int n;
        cin >> n;
        std::vector<ll>  o_pre(n+1, 0) , e_pre(n+1, 0);
        ll odd = 0 , even = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(i % 2) o_pre[i] += x;
            else e_pre[i] += x;
        }
        
        for(int i = 1; i <= n; i++){
            o_pre[i] += o_pre[i - 1];
            e_pre[i] += e_pre[i - 1];
        }
        int ans = 0;
        for(int i = 1; i <= n ; i++){
            odd = o_pre[i - 1] + e_pre[n] - e_pre[i];
            even = e_pre[i - 1] + o_pre[n] - o_pre[i];
            if(odd == even) ans += 1;
        }
        cout << ans << endl;
    }
    return 0;//
}