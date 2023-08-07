#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	auto ip = std::unique(s.begin(), s.end());
    	s.resize(std::distance(s.begin(), ip));
    	int cnt_zero = 0 , mx_ans = 2;
    	for(int i = 0; i < s.size(); i++) {
    		if(s[i] == '0') {
    			cnt_zero += 1;	
    		}
    	}
    	cout << min(mx_ans , cnt_zero) << endl;
    }
    return 0;
 }