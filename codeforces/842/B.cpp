#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int R , d;
    cin >> R >> d;
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
    	int x , y , r;
    	cin >> x >> y >> r;
    	int f = x * x + y * y;
    	if(f >= (R - d + r) * (R - d + r) && f <= (R - r) * (R - r)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}