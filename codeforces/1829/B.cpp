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
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];	
    	}
    	int cnt = 0 , mx = 0;
    	for(int i = 0; i < n; i++) {
    		if(v[i] == 1) {
    			mx = max(mx , cnt);
    			cnt = 0;
    		}	
    		else cnt++;
    	}
    	mx = max(mx , cnt);
    	cout << mx << endl;
    }
    return 0;
}