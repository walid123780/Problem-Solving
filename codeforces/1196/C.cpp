#include<bits/stdc++.h>
using namespace std;

const int INF = 1e5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	
    	int x_min = -INF, x_max = INF;
    	int y_min = -INF , y_max = INF;
     	for(int i = 0; i < n; i++){
    			int x , y;
    			int f1 , f2 , f3 , f4;
    			cin >> x >> y;
    			cin >> f1 >> f2 >> f3 >> f4;
    			if(!f1) {
    				x_min = max(x_min , x);
    			}
    			if(!f2) {
    				y_max = min(y_max , y);
    			}
    			if(!f3) {
    				x_max = min(x_max , x);
    			}
    			if(!f4) {
    				y_min = max(y_min , y);
    			}
    	}
    	if(x_min <= x_max && y_min <= y_max) {
    		cout << 1 << " " << x_min << " " << y_min << endl; 
    	}
    	else cout << 0 << endl;
    	
    }
    return 0;
}