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
    	std::vector<int> v(n);
    	// map<int , int> mp;
    	int mx = -1;
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    		mx = max (mx , v[i]);
    		// mp[i+1] = v[i];	
    	}
    	mx++;
    	for(int i = 0; i < n; i++) {
    		cout << mx - v[i] <<" ";
    	}
    	cout << endl;
    }
    return 0;
}	