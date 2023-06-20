#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	std::vector<int> v;
    	ll sum = 0;
    	for(int i = 0; i < n; i++) {
    		int x;
    		cin >> x;	
    		if(x < 0) sum += (x * (- 1));
    		else sum += x;
    		if(!v.empty() && v.back() > 0 && x > 0 || x == 0) {
    			continue;
    		}
    		v.push_back(x);
    	}
    	if(sum == 0) {
    		cout << 0 << " " <<  0 << endl;
    		continue;
    	}
    	int cnt = 1;
    	for(int i = 1; i < v.size(); i++) {
    		if(v[i] > 0) cnt++;
    	}
    	if(v.back() > 0) cnt--;
    	cout << sum << " " << cnt << endl;

    }
    return 0;
}