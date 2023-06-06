#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
bool len (int length , vector<int>& v, int k) {
	int sum = 0 , ac = 1;
	int n = v.size();
	for(int i = 0 ; i < n; i++) {
		sum += v[i];
		if(sum > length) {
			ac++;
			sum = v[i];
		}
	}
	if(ac > k) return false;
	else return true;
}
int main()
{
	int k;
	cin >> k;
	string str;
	getline(cin, str);
	getline(cin, str);
	int n = str.size();
	int cnt = 0 , mx = 0;
	std::vector<int> v;
	for(int i = 0; i < n; i++) {
	    cnt++;
		if(str[i] == ' '|| str[i] == '-') {
			v.push_back(cnt);
			cnt = 0;
		}
	}
	v.push_back(cnt);
	for(auto it  : v) mx = max(mx , it);
	int l = mx , r = n , seuu = 0;
	while(l <= r) {
		int mid = (l + r) >> 1;
		if(len(mid , v , k)) {
			seuu = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << seuu << endl;

	return 0;
}