#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int a , b, n;
    	cin >> a >> b;
    	n = a - 1;
    	long long xor_sum = 0;
    	if(n % 4 == 0) 
    		xor_sum = n;
    	else if(n % 4 == 1) 
    		xor_sum = 1;
    	else if(n % 4 == 2) 
    		xor_sum = n + 1;
    	else if(n % 4 == 3) 
    		xor_sum = 0;
    	if((xor_sum ^ b) == a) {
    		cout << a + 2 << endl;
    	}
    	else if(xor_sum == b) {
    		cout << a << endl;
    	}
    	else cout << a + 1 << endl;
    }
    return 0;
}