#include<bits/stdc++.h>
 
#define _ cin.tie(0);ios::sync_with_stdio(false);
using namespace std;
 
int main(){ _
 
 
 
    string str, tmp;
    while(cin >> str >> tmp){
    reverse(str.begin(), str.end());
    if(str == tmp) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}