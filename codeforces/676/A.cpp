#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    	int n;
    	cin >> n;
    	std::vector<int> v(n + 1);
    	int mx = -1 , mn = INT_MAX;
    	int mxp = -1 , mnp = -1;
    	for(int i = 1; i <= n; i++) {
    		cin >> v[i];	
    		if(mx < v[i]) {
    			mx = v[i];
    			mxp = i;
    		}
    		if(mn > v[i]) {
    			mn = v[i];
    			mnp = i;
    		}
    	}
    	cout << max(max((n - mxp) , (n - mnp)), max((mxp - 1) , (mnp - 1))) << endl;	
    return 0;
}