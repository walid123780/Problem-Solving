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
    	ll  n , a , b ;
    	cin >> n >> a >> b; 
    	double f = (double)b / 2;
    	if(f <= a){
    		ll k = n / 2;
    		ll h = (n % 2 == 1 ? a : 0);
    		cout <<( k * b ) + h << endl;
    	}
    	else cout<< a * n << endl;

    }
    return 0;
}