#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , k , d , w;
        cin >> n >> k >> d >> w;
        std::vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int start = v[0] + w;
        int ans = 1 , cnt = 1;
        for(int i = 1; i < n ; i++){
            if(cnt == k or v[i] > start + d){
                ans += 1;
                start = v[i] + w;
                cnt = 1;
            }
            else cnt += 1;
        }
        cout <<  ans << endl;

    }
    return 0;
}