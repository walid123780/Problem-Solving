#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n , m;
    	cin >> n >> m;
        int mn = INT_MAX , f = 0;
        int p = -1 ,h = -1;
    	for(int i = 1; i <= 1e5; i++){
            int f = i - 1;
            int j = (n / i) + (n % i != 0);
            int k = (m / i) + (m % i != 0);
            mn = min(mn , f + j + k);
        }
      cout << mn<< endl;
    }
    return 0;
}
