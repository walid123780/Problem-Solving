#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x , y;
    cin >> x >> y;
    double L = y * log(x);
    double R = x * log(y);
    if(L < R) {
    	cout << "<" << endl;
    } 
    else if(L > R) {
    	cout << ">" << endl;
    }
    else cout << "=" << endl;
    return 0;
}