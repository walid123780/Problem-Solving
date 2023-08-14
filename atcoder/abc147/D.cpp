#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    std::vector<long long> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];	
    }
    long long sum = 0;
    for(int i = 0; i < 60; i++) {
    	int zc = 0 , oc = 0;
    	for(int j = 0; j < n; j++) {
    		if(v[j] % 2 == 0) {
    			zc ++;
    		}	
    		else oc++;
    		v[j] /= 2;
    	}
    	sum = (sum + (1LL << i) % MOD * zc % MOD * oc) % MOD;
    }
    cout << sum << endl;
    return 0;
}