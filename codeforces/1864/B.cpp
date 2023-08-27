#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n , m;
    	cin >> n >> m;
    	string s;
    	cin >> s;
        string odd = "", even = "";
        for(int i = 0; i < n; i++) {
            if(i % 2) odd += s[i];
            else even += s[i];
        }
    	if(m % 2) {
            sort(odd.begin(), odd.end()), sort(even.begin(), even.end());
            for(int i = 0; i < n; i++) {
                if(i < even.size()) cout<< even[i];
                if(i < odd.size()) cout << odd[i];   
            }
        }
        else {
            sort(s.begin(), s.end());
            cout << s ;
        }
        cout << endl;
    }
    return 0;
}