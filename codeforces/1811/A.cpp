#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n , m , f = 0;
		cin >> n >> m;
		string s;
		cin >> s;
		for(int i = 0; i < n; i++){
			if((s[i] - '0') < m){
				f = 1;
				cout << m; 
				cout<< s.substr(i , n); 
				break;
			}
			else cout << s[i];

		}
		if(!f) cout << m;
		cout << endl;
	}
	return 0;
}