#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	std::vector<pair<int ,pair<int,int>>> x , y;
    	for(int i = 0; i < n; i++){
    			int a , b , c, d, e, f;
    			cin >> a >> b >> c >> d >> e >> f;
    			x.push_back(make_pair(a , make_pair(c , e)));
    			y.push_back(make_pair(b , make_pair(d , f)));

    	}
    	sort(x.begin(), x.end());
    	sort(y.begin(), y.end());
    	// for(auto it : x) {
    	// 	cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    	// }
    	int ok = 0 , koytax = 0 , koytay = 0 , setx = -1;
    	for(int i = 0 ; i < n; i++) {
    		if(x[i].first == setx && i) {koytax += 1 ; continue;}
    		else if(x[i].second.second == 1 && !ok) {
    			koytax += 1;
    		}
    		else if(x[i].second.second == 0 && !ok) {
    			koytax += 1;
    			setx = x[i].first;
    			ok = 1;
    		}
    		else if(x[i].second.first == 1 && ok) {
    			koytax += 1;
    		}
    	}
    	ok = 0;
    	int sety = -1;
    	for(int i = 0 ; i < n; i++) {
    		if(y[i].first == sety && i) {koytay += 1 ; continue;}
    		else if(y[i].second.first == 1 && !ok) {
    			koytay += 1;
    		}
    		else if(y[i].second.first == 0 && !ok) {
    			koytay += 1;
    			sety = y[i].first;
    			ok = 1;
    		}
    		else if(y[i].second.second == 1 && ok) {
    			koytay += 1;
    		}
    	}
    	if(koytax == n && koytay == n) {
    		if(setx == -1) setx = x[n - 1].first;
    		if(sety == -1) sety = y[n - 1].first;
    		cout << 1 << " " << setx << " " << sety << endl; 
    	}
    	else {
    		cout << 0 << endl;
    	}
    }
    return 0;
}