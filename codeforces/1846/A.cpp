#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	int cnt = n;
    	for(int i = 0; i < n; i++) {
    		int a , b;
    		cin >> a >> b;
    		if(a <= b) {
    			cnt -= 1;
    		}
    	}
    	cout << cnt << endl;
    }
    return 0;
}