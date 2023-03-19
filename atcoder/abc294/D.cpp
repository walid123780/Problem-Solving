#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n , q;
	cin >> n >> q;
	set < int > s;
	int j = 1;
	while(q--){
		int e;
		cin >> e;
		if(e == 2) {
			int f;
			cin >> f;
			s.insert(f);
		}
		if(e == 3){
			while(1){
				if(s.find(j) == s.end()){
					cout <<  j << endl;
					break;
				}
				else j += 1;
			}
		}
	}
	return 0;
}