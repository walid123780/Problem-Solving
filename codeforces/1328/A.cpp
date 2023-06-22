#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n , m;
    	cin >> n >> m;
    	int f = n / m;
    	if((n % m) != 0) f += 1; 
    	cout << (f * m) - n  << endl;
    	// cout << n << endl;
    }
    return 0;
}