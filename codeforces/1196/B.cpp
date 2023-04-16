#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n , k ;
    	cin >> n >> k;
    	std::vector<int> v(n + 69 , 0);
    	for(int i = 1; i <= n; i++){
    		cin >> v[i];	
    	}
    	std::vector<int> p;
    	ll sum = 0;
    	for(int i = 0; i <= n; i++) {
    		if(sum % 2) {
    			p.push_back(i);
    			sum = 0;
    		}
    		sum += v[i + 1];
    	}
    	if(p.size() >= k) {
    		int f = p.size() - k;
    		if(f % 2) {
    			cout << "NO" << endl;
    			continue;
    		}
    		cout << "YES" << endl;
    	    k -= 1;
    		for(int i = 0; i < p.size() && k; i++ , k--){
    				cout << p[i] << " ";
    		}
    		cout << n << endl;
    	}
    	else cout << "NO" << endl;
    }
    return 0;
}