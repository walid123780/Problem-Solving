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
    	int n;
    	cin >> n;
    	std::vector<int> v(n);
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}
    	sort(v.begin(), v.end());
    	int i = 0 , j = n - 1;
    	ll ans = 0;
    	while(i < j) {
    		ans += (v[j] - v[i]);
    		i++ , j--;
    	}
    	cout << ans << endl;
    }
    return 0;
}