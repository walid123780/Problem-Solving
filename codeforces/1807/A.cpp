#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
    	int a , b , c;
    	cin >> a >> b >> c;
    	int x = a + b;
    	int y = a - b;
    	if(x == c) cout << "+" << endl;
    	else cout << "-" << endl;
    }
}