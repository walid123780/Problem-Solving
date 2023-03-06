#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        long long a, b;
        cin>>a>>b;
        long long gen[a + 1] = {0};
        for(ll i = 1  ; i < a; i++)
        {
            gen[i] = i;
            if(i != 1) gen[i] = gen[i] + gen[i - 1];
        }
        int index = lower_bound(gen, gen + a, b) - gen;
        if(gen[index]  != b) index -= 1;
        long long kothai =  gen[index] - gen[index - 1];
        map<int, int > mp;
        mp[a - kothai] = 1;
        mp[a - (kothai + 1)] = 1;
        if(gen[index] != b)
        {
            mp[a - kothai] = 0;
            mp[a - (kothai + 1)] = 0;
            mp[a - (kothai + 2)] = 1;
            long long k = b - gen[index];
            mp[a - k] = 1;
        }
        for(int i =0 ; i < a ; i++)
        {
            if(mp[i] != 1) cout<<'a';
            else cout<<'b';
        }
        cout<<endl;
    }
    return 0;
}
