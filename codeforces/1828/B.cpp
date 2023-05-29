#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 69;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}
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
    	int fr[N] = {0};
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    		fr[v[i]] = i + 1;

    	}
    	int GCD = 0;
    	for(int i = 0; i < n; i++) {
    		int x = i + 1;
    		int y = fr[1 + i];
    		// cout << x << " " << y << endl;
    		int z = abs(x - y);
    		GCD = gcd(GCD , z);
    	}
    	cout << GCD << endl;
    }
    return 0;
}