#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int odd = 0 , even = 0;
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	if(x % 2) odd ++;
    	else even ++;	
    }
    if(even == n) {
    	cout << "Second" << endl;
    }
    else {
    	cout << "First" << endl;
    }
    return 0;
}