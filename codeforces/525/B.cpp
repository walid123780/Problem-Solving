#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
    // cin>> t;
	while(t--){
		string s;
		cin >> s;

		s = '&' + s;
		int n = s.size();
		int d;
		cin >> d;
		std::vector<int> v(d + 10 , INT_MAX);
		for(int i = 0; i < d; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < d; i++){
			if(i % 2) continue;
			else{
				int f = v[i] + (1 + (n - v[i]) - v[i]) / 2;
				for(int j = v[i]; j < min(v[i + 1] , f); j++){
					swap(s[j] , s[n - j]);
				}
			}
		}
		cout << s.substr(1 , n) << endl;
	}
	return 0;
}
