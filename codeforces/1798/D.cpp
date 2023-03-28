#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n , range = 0;
		cin >> n;
		std::vector<int> v(n) , re;
		int mn = INT_MAX , mx = INT_MIN;
		for(int i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] >= 0)mx = max(mx , v[i]);
			if(v[i] < 0) mn = min(mn , v[i]);
		}
		sort(v.begin(), v.end());
		range = mx  - mn;
		
		int i = 0 , j = n - 1 , f = 0;
		ll rm = 0, curr = 0; 
		while(i <= j){
			curr += rm;
			if((curr + v[j]) < range) {
				re.push_back(v[j]);
				rm = v[j];
				j--;
			}
			else if((curr + v[i]) < range){
				re.push_back(v[i]);
				rm = v[i];
				i++;
			}
			else {
				f = 1;
				break;
			}
		}
		if(f) {
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
			for(auto it : re){
				cout << it << ' ';
			}
			cout << endl;
		}
		
	}
	return 0;
}