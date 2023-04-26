#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i++){     
            for(int j = i + 1; j <= n; j++) {
               int x = i ^ j;
               if(x > j && i + j > x && x <= n) cnt += 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}