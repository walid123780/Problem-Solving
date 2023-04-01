#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--){
    	int n , page;
    	cin >> n >> page;
    	std::vector<int> v(n);
    	int sum = 0;
    	for(int i = 0; i < n; i++){
    		cin >> v[i];
    	}
    	sort(v.begin(), v.end() , greater<int>());
    	int l = 1, r = n, ans = -1;
    	while(l <= r){
    		int mid = l + r >> 1;
            int sum = 0;
    		for(int j = 0 ; j < n ; j++){
    			sum += max(v[j] - j / mid, 0);
    		}
    		if(sum >= page){
                ans =  mid;
                r = mid - 1;
            }	
            else l =  mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}