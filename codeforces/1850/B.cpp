#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	std::vector<pair<int , int>> v;
    	for(int i = 0; i < n; i++) {
    		int a , b;
    		cin >> a >> b;
    		if(a <=  10) v.push_back({b , i + 1});
    	}
    	sort(v.begin(), v.end());
    	cout << v[v.size() - 1].second << endl;	
    }
    return 0;
}