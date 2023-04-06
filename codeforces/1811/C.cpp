#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin >> n;
    	std::vector<int > v(n);
    	for(int i = 0; i < n - 1; i++){
    		cin >> v[i];	
    	}
    	cout << v[0] << ' ';
    	for(int i = 0; i < n - 2; i++){
    		cout << min(v[i] , v[i+1]) << ' ';	
    	}
    	cout << v[n - 2] << endl;
    }
    return 0;
}