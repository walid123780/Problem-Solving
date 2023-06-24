#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }
    std::vector<pair<int,int>> b(n);
    for(int i = 0; i < n; i++) {
    	cin >> b[i].first;
        b[i].second = i; 
    }
    sort(v.begin(), v.end() , greater<int> ());
    sort(b.begin(), b.end());
    std::vector<int> ans(n);
    for(int i = 0; i < n; i++) {
    	ans[b[i].second] = v[i];
    }
    for(auto it : ans) {
        cout << it << " ";
    } 
    cout << endl;
    return 0;
}