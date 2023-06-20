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
    	ll n;
    	cin >> n;
    	ll l = 0 , r = n , ans = 1;
    	while(r != 1) {
    		ans += r;
    		r/= 2;
    	} 
    	cout << ans << endl;
    }
    return 0;
}