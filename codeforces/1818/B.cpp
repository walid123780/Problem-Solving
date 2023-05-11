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
    	cin >> n;
    	if(n == 1) cout << 1 << endl;
    	else if(n % 2 == 0){
    		int i = n - 1;
    		int j = n;
    		while(i >= 1) {
    			cout << i << " " << j << " ";
    			
    			j -= 2;i -= 2;
    		}
    		cout << endl;
    	}
    	else cout << -1  << endl;
    }
    return 0;
}