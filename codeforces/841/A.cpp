#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    string s;
    cin >> s;
    int ch[26] = {0};
    for(int i = 0; i < n; i++) {
    	ch[s[i] - 'a']++;
    }
    for(int i = 0; i < 26 ; i++) {
    	if(ch[i] > m) {
    		// cout << ch[i] << " " << m << endl;
    		cout << "NO" << endl;
    		return 0;
    	}
    }
    cout << "YES" << endl;
    return 0;
}