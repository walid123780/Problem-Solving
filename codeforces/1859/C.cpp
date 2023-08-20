#include<bits/stdc++.h>
using namespace std;

const int LIMIT = 1e9 + 69;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	std::vector<long long> v(n);
    	for(int i = 0; i < n; i++) {
    		v[i] = i + 1;	
    	}
    	long long mx = 0;
    	for(int i = 0; i <= n; i++) {
    		vector<long long> b = v;
    		reverse(b.begin() + i , b.end());
    		long long val = 0 , mxv = 0;
    		for(int j = 0; j < n; j++) {
    			val += b[j] * (j + 1);
    			mxv = max(mxv , b[j] * (j + 1));
    		}
    		val -= mxv;
    		mx = max(mx , val);
    	}
    	cout << mx << endl;
    }
    return 0;
}