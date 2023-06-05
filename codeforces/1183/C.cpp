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
    	ll k , n , a , b;
    	cin >> k >> n >> a >> b;
    	k -= (n * a);
    	if(k > 0) {
    		cout << n << endl;
    	}
    	else {
    		k *= -1;
    		// cout <<  k <<  " ";
    		ll diff = a - b;
    		ll turns = (k + diff) / diff;
    		if(turns > n) {
    			cout << -1 << endl;
    		}
    		else {
    			cout << n - turns << endl;
    		}
    	}
    }
    return 0;
}