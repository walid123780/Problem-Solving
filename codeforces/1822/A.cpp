#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n , m;
    	cin >> n >> m;
    	std::vector<int> d(n);
    	for(int i = 0; i < n; i++){
    		cin >> d[i];
    	}
    	int mx = INT_MIN;
    	int pos = 0;
    	for(int i = 0; i < n; i++){
    		int x;
    		cin >> x;
    		if(d[i] <= m) {
    			if(mx < x) {
    				mx = x;
    				pos = i + 1;
    			}
    		}
    		m--;
    	}
    	if(!pos) {
    		cout << -1 << endl;
    	}
    	else 
    	cout << pos << endl;
    }
    return 0;
}