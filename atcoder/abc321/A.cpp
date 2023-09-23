#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++) {
    	if(s[i] >= s[i - 1]) {
    		cout << "No\n";
    		return; 
    	}
    }
    cout << "Yes\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}