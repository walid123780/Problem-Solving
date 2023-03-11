#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while(t--){
    	int n , cnt = 0;
    	cin >> n;
    	std::vector<int> v(n + 9) , ans(n+1 , 0);
    	for(int i = 1 ; i <= n; i++){
    		cin >> v[i];
    	}
    	for(int i = 1; i <= n ; i++){
    		if(ans[i] == 0) ans[v[i]] = 1;
    	}
    	for(int i = 1 ; i <= n; i++){
    		if(ans[i] == 0) cnt += 1;
    	}
    	cout << cnt << endl;
    	for(int i = 1 ; i <= n; i++){
    		if(ans[i] == 0) cout << i << ' ';
    	}
    	cout << endl;
    }
    return 0;
}