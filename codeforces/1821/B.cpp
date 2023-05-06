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
		std::vector<int> a(n) , b(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];	
		}
		for(int i = 0; i < n; i++) {
			cin >> b[i];	
		}
		int l , r;
		for(int i = 0; i < n; i++) {
			if(a[i] != b[i]) {
				l = i;
				r = i;
				for (int j = i + 1; j < n ; j++) {
					if(b[j - 1] <= b[j]) {
						r = j;
					}
					else break;
				}
				break;
			}	
		}
		for(int i = l - 1; i >= 0; i--) {
			if(b[i] <= b[i + 1]) {
				l = i;
			}
			else break;
		}
		cout << l + 1 << " " << r + 1<< endl;
	}
	return 0;
}