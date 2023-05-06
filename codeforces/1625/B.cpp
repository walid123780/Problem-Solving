#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	std::vector<int> v(n + 69);
    	map<int , int> cnt;
    	for(int i = 1; i <= n; i++) {
    		cin >> v[i];
    	}
    	int mx =  INT_MIN , ans = -1;

    	for(int i = 1; i <= n; i++) {
    		if(cnt[v[i]] == 0) {
    			cnt[v[i]] = i;
    		}
    		else {
    			int f = i - cnt[v[i]];
    			mx = max(mx , f);
    			int z = (cnt[v[i]] - 1);
    			int x = n - (i + f - 1);
    			mx += z + x;
    			ans = max(mx , ans);
    			mx = INT_MIN;
    			cnt[v[i]] = i;
    		}
     	}
     	cout << ans << endl;

    }
    return 0;
}