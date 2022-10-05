#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::priority_queue <int >a,b;
        for(int i = 0; i < n ; i++){
            int x;
            cin>>x;
            a.push(x);
        }
        for(int i = 0; i < n ; i++){
            int x;
            cin>>x;
            b.push(x);
        }
        int ans =  0;
        while(!a.empty()){
            int x =  a.top();
            int y =  b.top();

            if(x == y){
                a.pop();
                b.pop();
            }
            else if(x < y){
                b.pop();
                b.push(int_length(y));
                ans++;
            }
            else if(y < x){
                a.pop();
                a.push(int_length(x));
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
