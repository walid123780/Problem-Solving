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
    	std::vector<int> a(n) , b(n);
    	int mx_a = INT_MIN;
    	int mx_b = INT_MIN;
    	for(int i = 0; i < n; i++){
    		cin >> 	a[i];
    	}
    	for(int i = 0; i < n; i++){
    		cin >> b[i];	
    	}
    	for(int i = 0; i < n; i++){
    		if(a[i] > b[i]) swap(a[i] , b[i]);	
    	}
    	for(int i = 0; i < n; i++){
    		mx_a = max(mx_a , a[i]);	
    	}
    	for(int i = 0; i < n; i++){
    		mx_b = max(mx_b , b[i]);
    	}
    	if(mx_b == b[n-1] && mx_a == a[n-1]){
    		cout << "YES" << endl;
    	}
    	else cout << "NO" << endl;
    }
    return 0;
}