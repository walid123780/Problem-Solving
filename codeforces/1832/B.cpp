#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 9;
ll v[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n , k;
    	cin >> n >> k;
       	for(int i = 1; i <= n; i++) {
    		cin >> v[i];
    	}
    	sort(v + 1, v + n + 1); 
    	for (int i = 1; i <= n; i++) {
    		v[i] += v[i - 1];
    	}
    	ll ans = 0;
    	for(int i = 0; i <= k; i++) {
    		ll l = i * 2 , r =  n - (k - i);
    		ans =  max (ans , v[r] - v[l]);
    	} 
    	cout << ans << endl;
    }
    return 0;
}