#include<bits/stdc++.h>
using namespace std;

#define ll long long
void mexdiv(int n , vector<int> &divs){
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			divs.push_back(i);
			if (i != n / i) divs.push_back(n / i);
		}
	}
	sort(divs.begin(), divs.end());
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> divs;
		mexdiv(n , divs);
		int mex = -1 , cnt = 1;
		for(int i = 0; i <= 1e6; i++) {
			if(divs[i] != i + 1) {
				mex = i + 1;
				break;
			}
		}
		int j = 0;
		while(j < n) {
			for(char i = 'a', cnt = 1; i <= 'z' && cnt <= mex && j < n; i++, cnt++ ,j++) {
				cout << i;	
			}
		}
		cout << endl;
	}
	return 0;
}