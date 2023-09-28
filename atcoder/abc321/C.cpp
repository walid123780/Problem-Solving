#include <bits/stdc++.h>
using namespace std;

void solve() {
    std::vector<long long> list;
    for(int i = 1; i < (1 << 10); i++) {
    	long long f = 0;
    	//cout << "Current ith positions " << i << "\n";
    	for(int j = 9; j >= 0; j--) {
    		
    		if(i & (1 << j)) {
    			f *= 10;
    			f += j;
    			/*cout << i << " & ";
    			cout << (1 << j) << " = ";
    			cout << f << endl;*/
    		}
    	}
    	list.push_back(f);
    }
    sort(list.begin(), list.end());
    int k;
    cin >> k;
    cout << list[k] << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}