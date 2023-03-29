#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin >> n ;

		vector<vector<int>>v;
		for(int i = 0 ; i < n; i++){
			int m;
			cin >> m;
			vector<int > a;
			for(int j = 0; j < m; j++){
				int x;
				cin >> x;
				a.push_back(x);
			}
			v.push_back(a);
		}
		set<int> st;
		std::vector<int> ans(n);
		int ff = 0;
		for(int i = n -1; i >= 0; i--){
			bool f = false;
			for(int j = 0; j < v[i].size(); j++){
				if(st.find(v[i][j]) == st.end()){
					ans[i] = v[i][j];
					f = true;
					break;
				}
			}
			if(f == false) {ff = 1 ; break;}
			for (int j = 0; j < v[i].size() ; j++)
			{
				st.insert(v[i][j]);
			}
		}
		if(ff)cout << -1 ;
		else
		for (auto it : ans)
		{
			cout << it << ' ';
		}
		cout << endl;
	}
	return 0;
}