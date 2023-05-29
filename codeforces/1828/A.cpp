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
    	if(n % 2) {
    		for(int i = 0; i < n; i++) {
    			cout << i + 1 << " ";
    		}
    		cout << endl;
    	}
    	else {
    		for(int i = 0; i < n; i++) {
    			cout << (i + 1) * 2 << " ";	
    		}
    		cout << endl;
    	}
    }
    return 0;
}