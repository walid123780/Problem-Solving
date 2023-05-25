#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >>s;
		int g = 0 , l = 0;
		int mxg = 0 , mxl = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '<') {
				g++;
			}	
			else {
				mxg = max(mxg , g);
				g = 0;			
			}
		}
		mxg = max(mxg , g);
		for(int i = 0; i < n; i++) {
			if(s[i] == '>') {
				l++;
			}	
			else {
				mxl = max(mxl , l);
				l = 0;			
			}
		}
		mxl = max(mxl , l);
		cout << max (mxg , mxl) + 1 << endl; 
	}
	return 0;
}