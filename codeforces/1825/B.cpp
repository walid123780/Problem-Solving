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
    	int r = n * m;
    	std::vector<int> v(n * m);
    	for(int i = 0; i < n * m; i++) {
    		cin >> v[i];
    	}
        sort(v.begin(), v.end());
        if(n > m) swap(n , m);
        int ft = r - n, st = n - 1;
        int mx = v[r - 1] , mn = v[0];
        int mx_sec = v[r - 2] , mn_sec = v[1];  
        int a = ft * (mx - mn); 
        int b = st *(mx_sec - mn); 
        int c = st * (mx - mn_sec);
        cout << max ((a + b) , (a + c)) << endl;
    }
    return 0;
}