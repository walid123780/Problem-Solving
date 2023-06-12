#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	if(n <= 4) {
    		cout << "Bob" << endl;
    	}
    	else {
    		cout << "Alice" << endl;
    	}
    }
    return 0;
}