#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
typedef pair<int, int> pii;
struct myComp {
	bool operator()(const pair<int, int> a, const pair<int, int> b) {
		int lena = a.second - a.first + 1, lenb = b.second - b.first + 1;
		if (lena == lenb) return a.first > b.first;
		else return lena < lenb;
	}
};
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<int> ans(n + 1);
		priority_queue<pii, vector<pii>, myComp> q;
		q.push({1 , n}); int i = 1;
		while(i <= n) {
			int l = q.top().first;
			int r = q.top().second;
			int set = (l + r) >> 1;
			ans[set] = i++;
			q.pop(); 
			if (l < set) q.push({l , set - 1});
			if (set < r) q.push({set + 1 , r});	
		}
		for(int i = 1; i <= n; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}