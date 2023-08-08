#include<bits/stdc++.h>
using namespace std;

void decToBinary(int n) {
	int cnt = 0;
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) {
            cnt += 1;
        }
    }
    cout << cnt << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;	
   	decToBinary(n);
    return 0;
}