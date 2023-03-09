#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int i = 0 , j = n - 1;
		int f = 0 , ff = 0 , x = 0;
		while(i <= j){
			if(s[i] != s[j] && ff) x = 1;
			else if(s[i] != s[j] && !ff) f++;
			else if(s[i] == s[j] && f) ff++;
			i++ , j--;
		}
		if(x) cout << "NO" <<endl;
		else cout<< "YES" <<endl;
	}
	return 0;
}	