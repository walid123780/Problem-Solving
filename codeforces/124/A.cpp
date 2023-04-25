#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) { // no less than a  
    	int n , a , b; // no more than b
    	int ans = 0;
    	cin >> n >> a >> b;
    	for(int i = 1; i <= n; i++){
    		int front = i - 1;
    		int back = n - i;
    		if(front >= a && back <= b) {
    			ans++;
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}