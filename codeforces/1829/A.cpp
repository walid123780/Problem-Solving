#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	string s , t = "codeforces";
    	cin >> s;
    	int cnt = 0;
    	for(int i = 0; i < s.size(); i++) {
    	 	if(s[i] != t[i]) cnt++;
    	 } 
    	 cout << cnt << endl;
    }
    return 0;
}