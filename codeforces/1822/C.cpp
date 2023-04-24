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
    	ll a;
    	cin >> a;
    	ll f = a * a;
    	f += (a * 2) + 2;
    	cout << f << endl;
    }
    return 0;
}