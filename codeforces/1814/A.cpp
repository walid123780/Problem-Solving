#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,  k;
    	cin >> n >> k;
    	if((n + k)%2 == 0 || (n + (2 * k)) % 2 == 0)cout << "YES" << endl;
    	else cout << "NO" << endl;
    }
    return 0;
}