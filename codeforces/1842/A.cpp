#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n , m;
    	cin >> n >> m;
    	std::vector<int> a(n) , b(n);
    	ll suma = 0 , sumb = 0;
    	for(int i = 0; i < n; i++) {
    		int x;
    		cin >> x;
    		suma += x;
    	}
    	for(int i = 0; i < m; i++) {
    		int x;
    		cin >> x;
    		sumb += x;
    	}
    	// cout <<suma << " " << sumb << endl; 
    	if(suma > sumb) {
    		cout << "Tsondu" << endl;
    	}
    	else if(suma < sumb) {
    		cout << "Tenzing" << endl;
    	}
    	else cout << "Draw" << endl;
    }
    return 0;
}