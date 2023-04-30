#include<bits/stdc++.h>
using namespace std;

const int M = 10;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	while(t--) {
		int n = 10;
		string s[M];
		for(int i = 0; i < n; i++) {
			cin >> s[i];
		}
		for(int r = 0; r < n; r++) {
			for (int i = 0; i < n - 5 + 1; i++) {
				int c = 0 , gap = 0;
				for (int j = i; j < i + 5; j++) {
					
					if(s[r][j] == 'X') c++;
					if(s[r][j] == '.') gap++;
				}
				if(c == 4 && gap == 1 || c == 5) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
		for(int r = 0; r < n; r++) {
			for (int i = 0; i < n - 5 + 1; i++) {
				int c = 0 , gap = 0;
				for (int j = i; j < i + 5; j++) {
					if(s[j][r] == 'X') c++;
					if(s[j][r] == '.') gap++;
				}
				if(c == 4 && gap == 1 || c == 5) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
		for(int r = 0; r < n - 5 + 1; r++) {
			for (int i = 0; i < n - 5 + 1; i++) {
				int c = 0 , gap = 0 , f = i , k = r;
				for (int j = 0; j < 5; j++) {
					
					if( s[k][f] == 'X') c++;
					else if( s[k][f] == '.') gap++;
					k += 1;
					f += 1;
				}
				if(c == 4 && gap == 1 || c == 5) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
		for(int r = 0; r < n - 5 + 1; r++) {
			for (int i = n - 1; (i - 5 + 1) >= 0; i--) {
				int c = 0 , gap = 0 , f = i , k = r;
				for (int j = 0; j < 5; j++) {
					if(s[k][f] == 'X') c++;
					if(s[k][f] == '.') gap++;
					k += 1;
					f -= 1;
				}
				if(c == 4 && gap == 1 || c == 5) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
		cout << "NO" << endl;

	}
	return 0;
}