#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    std::vector<ll> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];	
    }
    sort(v.begin(), v.end());
    std::vector<ll> arr;
    for(int i = n / 2; i < n; i++) {
        arr.push_back(v[i]);
    }
    for(int i = 0; i < arr.size() - 1 && k; i++) {
        if(k > 1LL * (arr[i + 1] - arr[i]) * (i + 1)) {
            k -= (arr[i+1] - arr[i]) * (i+1);
        }
        else {
           cout << arr[i] + (k / (i + 1))<< endl;
           return 0;
       }
   }
   cout << arr[arr.size() - 1] + (k / arr.size())<< endl;
   return 0;
}