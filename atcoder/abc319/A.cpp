#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //solve();
    std::vector<pair<string, int>> v;
    v.push_back({"tourist", 3858});
    v.push_back({"ksun48", 3679});
    v.push_back({"Benq", 3658});
    v.push_back({"Um_nik", 3648});
    v.push_back({"apiad", 3638});
    v.push_back({"Stonefeang", 3630});
    v.push_back({"ecnerwala", 3613});
    v.push_back({"mnbvmar", 3555});
    v.push_back({"newbiedmy", 3516});
    v.push_back({"semiexp", 3481});

    string s;
    cin >> s;
    int n = 10;
    for(int i = 0; i < n; i++) {
    	if(v[i].first == s) {
    		cout << v[i].second << endl;
    		return 0;
    	}
    }
}