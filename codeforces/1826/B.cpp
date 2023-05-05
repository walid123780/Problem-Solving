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
    	cin >> n ;
    	int v[n + 1];
    	for(int i = 1; i <= n; i++) {
    		cin >> v[i];	
    	}
    	int gcd = 0;
    	for(int i = 1; i <= n; i++) {
    		gcd = __gcd(gcd, abs(v[i] - v[n - i + 1]));	
    	}
    	cout<< gcd << endl;
    }
    return 0;
}