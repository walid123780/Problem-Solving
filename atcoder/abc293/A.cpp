#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while(t--){
    	string s;
    	cin >> s;
    	for(int i = 1 ; i < s.size() ; i+=2){
    		swap(s[i] , s[i-1]);
    	}
    	cout << s << endl;
    }
    return 0;
}
