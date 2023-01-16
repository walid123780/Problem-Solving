#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,d,h;
        cin>>w>>d>>h;
        int a,b,f,g;
        cin>>a>>b>>f>>g;
        int x = a + b;
        int y = f + g;
        int r = abs(a - f) + abs (b - g);

        int p = h + (min({f, g, abs(w - f), abs(d - g)}) * 2 ) + r;
        int q = h + (min({a, b, abs(w - a), abs(d - b)}) * 2) + r;
        int ans = min(p ,q);
        cout<<ans<<endl;
//       int s_mn = min({s_mn , abs(0 - g) , abs(d - g)});
//       s_mn = min({s_mn , abs(0 - f) , abs(w - f)});
//       int f_mn = min({f_mn , abs(0 - b) , abs(d - b)});
//       f_mn = min({f_mn , abs(0 - a) , abs(w - a)});
//       int x_mn = min({x_mn , f_mn , s_mn});
//       int ans = h + x_mn +

    }
}
