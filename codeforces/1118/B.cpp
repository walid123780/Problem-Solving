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
		std::vector<ll> v(n) , pre(n , 0) , o_pre(n , 0) , e_pre(n , 0);
		for(int i = 0; i < n; i++){
			cin >> v[i];
			pre[i] = v[i];
			if(i) pre[i] = pre[i - 1] + pre[i];
		}
		o_pre[0] = v[0];
		e_pre[0] = 0;
		if(n >= 1) e_pre[1] = v[1];
		for(int i = 0; i < n; i++){
			if(i % 2) o_pre[i] = o_pre[i - 1]; 
			else if(!(i % 2) && i >= 2) o_pre[i] = v[i] + o_pre[i - 2];
			if(!(i % 2) && i) e_pre[i] = e_pre[i-1];
			else if(i % 2 &&  i >= 3) e_pre[i] = e_pre[i- 2] + v[i];
		}
		int ans = 0;
		for(int i = 0 ; i < n; i++){
			ll sum = 0, o_sum = 0, e_sum = 0;
			sum = pre[n - 1] - pre[i];
			if(i % 2){o_sum = e_pre[n-1] - e_pre[i]; e_sum = sum - o_sum;} 
			else {e_sum = o_pre[n-1] - o_pre[i]; o_sum = sum - e_sum;}
			if(i)e_sum += e_pre[i - 1];
			if(i)o_sum += o_pre[i - 1];
			// cout << e_sum << ' ' << o_sum << endl;
			if(e_sum == o_sum) ans += 1;
		}
		cout << ans << endl;
	}
	return 0;
}