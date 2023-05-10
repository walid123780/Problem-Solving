#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
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
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}
    	int f = 0;
        int m = v[0];
    	for(int i = 1; i < n; i++) {
            int LCM = lcm(v[i] , v[i-1]);
    		if(gcd(m, LCM) != v[i - 1]) {
    			f = 1;
                break;
    		}
            m = LCM;
    	}
    	if(f) {
    		cout << "NO" << endl;
    	}
 		else  {
 			cout << "YES" << endl;
 		}
    }
    return 0;
}