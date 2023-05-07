#include<bits/stdc++.h>
using namespace std;

bool ok (int n , int m) {
	if(n == m) return true;
	else if(n % 3 != 0) return false;
	else return {(ok(n / 3 , m) || ok(2 * n / 3 , m))};
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n , m;
    	cin >> n >> m;
    	int a = n , b;
    	if(ok(n , m)) cout << "YES" << endl;
    	else cout << "NO" << endl;
    }
    return 0;
}