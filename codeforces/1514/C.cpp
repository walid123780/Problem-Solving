#include <bits/stdc++.h>
using namespace std;

bool ok[100005];
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}
void solve() {
    int n;
    cin >> n;
    long long product = 1;
    for(int i = 1; i < n; i++) {
    	if(gcd(n , i) == 1) {
    		ok[i] = 1;
    		product = (product * i) % n;
    	}
    }
    if(product != 1) ok[product] = 0;
    cout << count(ok + 1,ok + n , 1) << "\n";
    for(int i = 0; i < n; i++) {
    	if(ok[i]) {
    		cout << i << " ";
    	}	
    }
    cout << "\n";	
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}