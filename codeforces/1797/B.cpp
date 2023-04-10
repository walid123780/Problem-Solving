#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin >> n >> k;
        int arr[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
            } 
        }
        int l = 0 , r = n - 1 , ses = 0;;
        while(l <= r){
            for(int i = 0; i < n; i++) {
                if(arr[l][i] == arr[r][n - i - 1]) continue; 
                else if(arr[l][i] != arr[r][n - i - 1] && k) {
                    arr[l][i] = arr[r][n -  i - 1];
                    k--;
                }
                else ses = 1;
            }
            l += 1 , r -= 1;
        }
        if(ses || (n % 2 == 0 && k % 2 == 1)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}