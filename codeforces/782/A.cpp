#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<int,int> socks;
	int cnt = 0 , mx = 0;
	for(int i = 0; i < (n * 2); i++) {
		int x;
		cin >> x;
		socks[x]++; 
		if(socks[x] == 2) {
			cnt--;
		} 
		else if(socks[x] == 1) {
			cnt++;
		}
		mx = max(mx , cnt);
	}
	cout <<  mx << endl;
	return 0;
}